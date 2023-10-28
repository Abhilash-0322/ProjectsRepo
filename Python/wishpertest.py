# import torch
# import torchaudio
# import numpy as np


# model = torch.hub.load('s3prl/s3prl', 'whisper_1')
# model.eval()
# waveform, sample_rate = torchaudio.load('input.wav')  # load your waveform audio file


# # Convert the audio to mono if it's stereo
# if waveform.shape[0] > 1:
#     waveform = torch.mean(waveform, dim=0, keepdim=True)

# # Resample audio if required sample rate is different
# if sample_rate != model.get_sample_rate():
#     resampler = torchaudio.transforms.Resample(sample_rate, model.get_sample_rate())
#     waveform = resampler(waveform)

# # Normalize the waveform (if not already normalized)
# if torch.abs(waveform).max() > 1.0:
#     waveform /= torch.abs(waveform).max()

# # Pad or truncate audio to a fixed duration
# duration = model.get_max_length()  # the maximum duration supported by the model
# desired_length = int(duration * model.get_sample_rate())
# waveform_length = int(waveform.size(1))
# if waveform_length < desired_length:
#     deficit = desired_length - waveform_length
#     waveform = torch.nn.functional.pad(waveform, (0, deficit))
# elif waveform_length > desired_length:
#     waveform = waveform[:, :desired_length]

# # Format audio for model input
# input_audio = model.parse_waveform(waveform).unsqueeze(0)

# # Generate audio using the Whisper-1 model:
# with torch.no_grad():
#     output_audio = model.forward(input_audio)

# # Convert the generated audio back to numpy array
# output_audio = output_audio.squeeze().detach().numpy()

# # Save the generated audio as a waveform to a file
# torchaudio.save('output.wav', torch.from_numpy(output_audio), model.get_sample_rate())
import torch
import torchaudio
import numpy as np

try:
    model = torch.hub.load('s3prl/s3prl', 'whisper_1')
    model.eval()
except Exception as e:
    print(f"Error loading the Whisper-1 model: {e}")
    exit(1)

try:
    waveform, sample_rate = torchaudio.load('input.wav')  # load your waveform audio file
except Exception as e:
    print(f"Error loading the input audio file: {e}")
    exit(1)

# Convert the audio to mono if it's stereo
if waveform.shape[0] > 1:
    waveform = torch.mean(waveform, dim=0, keepdim=True)

# Resample audio if required sample rate is different
if sample_rate != model.get_sample_rate():
    try:
        resampler = torchaudio.transforms.Resample(sample_rate, model.get_sample_rate())
        waveform = resampler(waveform)
    except Exception as e:
        print(f"Error resampling audio: {e}")
        exit(1)

# Normalize the waveform (if not already normalized)
if torch.abs(waveform).max() > 1.0:
    waveform /= torch.abs(waveform).max()

# Pad or truncate audio to a fixed duration
duration = model.get_max_length()  # the maximum duration supported by the model
desired_length = int(duration * model.get_sample_rate())
waveform_length = int(waveform.size(1))
if waveform_length < desired_length:
    deficit = desired_length - waveform_length
    waveform = torch.nn.functional.pad(waveform, (0, deficit))
elif waveform_length > desired_length:
    waveform = waveform[:, :desired_length]

# Format audio for model input
try:
    input_audio = model.parse_waveform(waveform).unsqueeze(0)
except Exception as e:
    print(f"Error formatting audio for model input: {e}")
    exit(1)

# Generate audio using the Whisper-1 model
try:
    with torch.no_grad():
        output_audio = model.forward(input_audio)
except Exception as e:
    print(f"Error generating audio with the model: {e}")
    exit(1)

# Convert the generated audio back to numpy array
output_audio = output_audio.squeeze().detach().numpy()

# Save the generated audio as a waveform to a file
try:
    torchaudio.save('output.wav', torch.from_numpy(output_audio), model.get_sample_rate())
    print("Audio generation successful.")
except Exception as e:
    print(f"Error saving the output audio: {e}")
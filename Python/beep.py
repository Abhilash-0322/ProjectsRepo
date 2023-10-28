import winsound

# Define the duration and frequency of the beep sound
duration = 2000  # milliseconds
frequency = 15800  # Hz (A4 note)

# Generate the beep sound
winsound.Beep(frequency, duration)
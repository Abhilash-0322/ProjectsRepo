document.getElementById('speakButton').addEventListener('click', () => {
    const textToSpeak = prompt("Enter Your Text");
    const utterance = new SpeechSynthesisUtterance(textToSpeak);

    // Get the list of available voices
    const voices = window.speechSynthesis.getVoices();

    // Choose a voice (you can change the index)
    utterance.voice = voices[1]; // Change the index as needed

    // Speak the text
    window.speechSynthesis.speak(utterance);
});

// The voices might not be immediately available, so you can listen for the voiceschanged event
window.speechSynthesis.onvoiceschanged = () => {
    const voices = window.speechSynthesis.getVoices();
    console.log(voices);
};
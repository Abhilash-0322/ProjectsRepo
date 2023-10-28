import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class gf {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            JFrame frame = new JFrame("AI Girlfriend Chat");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setSize(600, 400);

            JTextArea conversationText = new JTextArea();
            conversationText.setEditable(false);

            JScrollPane scrollPane = new JScrollPane(conversationText);

            JTextField userInputField = new JTextField(30);

            JButton sendButton = new JButton("Send");
            sendButton.addActionListener(new ActionListener() {
                public void actionPerformed(ActionEvent e) {
                    String userMessage = userInputField.getText();

                    // Add user's input to the conversation
                    conversationText.append("You: " + userMessage + "\n");

                    // Generate a response (you need to implement this part)

                    // Add AI's response to the conversation
                    String aiResponse = "AI: This is an AI response\n"; // Replace with AI's response
                    conversationText.append(aiResponse);

                    // Clear user input field
                    userInputField.setText("");
                }
            });

            JPanel panel = new JPanel();
            panel.setLayout(new BorderLayout());
            panel.add(scrollPane, BorderLayout.CENTER);
            panel.add(userInputField, BorderLayout.SOUTH);
            panel.add(sendButton, BorderLayout.EAST);

            frame.getContentPane().add(panel);
            frame.setVisible(true);
        });
    }
}
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

# Email configuration
sender_email = "your@gmail.com"  # Your Gmail address
receiver_email = "recipient@example.com"  # Recipient's email address
password = "your_app_password"  # App Password generated from your Gmail account settings

# Create a message
subject = "Hello from My Chatbot"
message = "This is a test email sent from my chatbot."

msg = MIMEMultipart()
msg['From'] = sender_email
msg['To'] = receiver_email
msg['Subject'] = subject

msg.attach(MIMEText(message, 'plain'))

# Connect to the SMTP server
try:
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.starttls()
    server.login(sender_email, password)
    text = msg.as_string()
    
    # Send the email
    server.sendmail(sender_email, receiver_email, text)
    server.quit()
    print("Email sent successfully.")
except Exception as e:
    print(f"An error occurred: {str(e)}")

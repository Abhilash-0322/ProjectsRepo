import smtplib
from email.mime.text import MIMEText

def send_email(subject, message, recipient_email):
    # Configure Gmail's SMTP server details
    smtp_server = 'smtp.gmail.com'
    smtp_port = 587  # Use 587 for TLS (Transport Layer Security) encryption
    smtp_username = 'bazilfreefire@gmail.com'
    smtp_password = 'brazil2003'

    # Create the email message
    msg = MIMEText(message)
    msg['Subject'] = subject
    msg['From'] = smtp_username
    msg['To'] = recipient_email

    # Connect to the SMTP server and send the email
    try:
        server = smtplib.SMTP(smtp_server, smtp_port)
        server.starttls()
        server.login(smtp_username, smtp_password)
        server.sendmail(smtp_username, recipient_email, msg.as_string())
        server.quit()
        return True  # Email sent successfully
    except Exception as e:
        print(f"Email sending failed: {str(e)}")
        return False  # Email sending failed

send_email("test","HI","abhilash.maurya2003@gmail.com")
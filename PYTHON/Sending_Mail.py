import smtplib

Server=smtplib.SMTP('smtp.gmail.com',587)
Server.starttls()
Server.login("amrutabhujbal123@gmail.com","ammuiccsvanita09")
m="mesg fot attending  python workshop"
Server.sendemail("amrutabhujbal123@gmail.com","sdg1715@gmail.com",m)
print("Email send")
Server.quit()

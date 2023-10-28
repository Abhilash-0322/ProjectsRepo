# import csv

# name=input("what's your name")
# home=input("what's your house")
# age=int(input("enter your age"))

# with open("file.csv","a")as file:
#     writer=csv.DictWriter(file,fieldnames=["name","home","age"])
    # writer.writerow({"home":home,"name":name,"age":age})

# import getpass
# import googlesearch


f=open('myfile.txt','a')
a=f.write("hello i m good")
f.close()
print(a)
# print(f)
with open('hello.txt','w') as f:
    e=["hey i m good\n","we are good\n","we are awesome\n"]
    f.writelines(e)
b=open('hello.txt','r')
# c=b.read()
# print(c)
d=b.readlines()
print(d)
g=lambda x: x+2
print(g(3))
def appl(fx,value):
    return fx(value)
print(appl(lambda x:x+2,2))
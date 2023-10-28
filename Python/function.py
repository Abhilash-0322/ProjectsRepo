# """def newfunction(name):
#     print("hello "+name+"\n"+name+" i m comming")
# newfunction("world")
# newfunction("jupiter")
# newfunction("mars")"""
# """def new(**arg):
#     print("we wanna go to "+arg["andrea"])
# new(andrea="san",sanghai="china")"""
# """a=2
# def new(value):
#     global a
#     if(a<1000):
#         print(a)
#         a=a**2
#         new(a)
#     else:
#         print("done")
# new(a)"""
# print("hello")
# print(5)
# print('by by')
# print(17*19)
# print("im a good boy and\n the viewier is also a good boy/girl")
# #hey please don't remove this line
# print("hey i m a good boy and \"you are a good boy\"")
# a=38020342040
# print(a)
# print("harry")
# b="hi"
# print(type(b))
# c=complex(8,2)
# print(c)
# print(5+8)
# print(5**3)
# n=4
# m=7
# print(m+n, "is the sum of numbers")
# print(m-n,"is the substraction of numbers")
# print(m*n,"is the multiplication of numbers")
# print(m/n,"this is the devision")
# z=True
# print(int(z))
# d="3"
# e="4"
# print(int(d)+int(e))
# f=input("enter your no")
# print("my name is ",f)
# print(e.isalnum())
# g=int(input("enter a number"))
# if(g>18):
#     print("you can drive")
# elif(g<0):
#     print("you are not born foetus")
# else:
#     print("you can't drive")

# import os
# os.system("python")
# b=int(input("enter a no: "))
# match b:
#     case 0:
#         print("x is zero")
#     case 4:
#         print("case is 4")
#     case _ if b!=80:
#         print("case is not 80")
# for i in range (12):
#     print(i*5)
#     if(i==5):
#         print("skip the iteration")
#         continue
#     if (i==10):
#         print("its 10 im going")
#         break
# #this is a do while loop in python
# # while(True):
# #     print("im good")
# #     if(i==50):
# #         break
# def calculateMean(a,b):
#     mean=(a*b)/(a+b)
#     print(mean)
# calculateMean(2,3)
# def isgreater(a,b):
#     if(a>b):
#         print("a is greater")
#     else:
#         print("b is greater")
# isgreater(5,6)
# def islesser():
#     pass
# l=[3,4,6,1]
# print(l)
# l.sort()
# name=["abhilash","sahil","ureco","bruno","laven"]
# print(l)
# string=(f"hey my name is {name}")

# country="india"
# print(string)
# money=19.12344
# price=f"for only {money:.2f}"
# # print(price)
# def new():
#     '''this is me'''
# print(new.__doc__)
# def factorial(n):
#     if n==1 or n==0:
#         return 1
#     else:
#         return n*factorial(n-1)
# print(factorial(1))
# def fibonachi(n):
#     first=0
#     second=1
#     fib=0
#     for i in range (n):
#         print(fib)
#         fib=first+second
#         first=second
#         second=fib

#     return fib
# if __name__=="main":
#     fibonachi(9)
# dic={0:"herry",1:"amit",2:"william",3:"david"}
# print(dic[1])
# print(dic.get(int(input("enter a no: "))))
# for i in dic:
#     print(f"the value corresponding to key {i} is {dic[i]}")
# dic2={4:"rahul"}
# dic2.update(dic)
# c=dic2.values()
# print(dic2)
# print("c is",c)
a=(input("enter a no"))
print(f"multiplication table of {a} is")
try:
    for i in range (10):
        print(f"{a}X{i} = ", int(a)*i)
except Exception and  ValueError as c:
    c
finally:
    print("executed idk with error or not")
print("imp")
if(True):
    raise BaseException("this is not done")
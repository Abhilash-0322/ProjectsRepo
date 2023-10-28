P=int(input ("enter Principle"))
R=int(input("provide rate"))
T=int(input("The Time Money Needs To Be Kept"))
C=int(input("enter the time for compounding"))
I=0
N=T//C
for i in range(N,0,-1):
    I=I+((P*R*C)/100)
    P=P+I
print(I)
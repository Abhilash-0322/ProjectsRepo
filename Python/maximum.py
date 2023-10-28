fact=1
a=int(input("enter a number"))
for i in range(a,0,-1):
    fact=fact*a
    a=a-1
print(fact)
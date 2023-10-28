a=[]
for i in range (11):
    b=int(input("enter a number"))
    a.append(b)
    print(a)
h=a[0]
l=a[0]
for j in range(10):
    if (a[j]>h):
        h=a[j]
    elif(a[j]<l):
        l=a[j]
s=h+l
print(s)
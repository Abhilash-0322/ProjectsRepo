a=int(input("enter a number"))
for i in range(1,a+1,1):
    if (i%2==0):
        continue
    else:
        print(i)

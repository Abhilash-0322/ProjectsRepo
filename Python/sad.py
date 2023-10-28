a=[]
for i in range(3):
    b=[]
    for j in range(3):
        c=int(input("enter a number"))
        b.append(c)
    a.append(b)

for i in range(3):
    for j in range(3):
         print(a[i][j], end=" ")
    print()
d=(
    (a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-
    (a[0][1]*(a[1][2]*a[2][0]-a[2][0]*a[1][2]))+
    (a[0][2]*(a[1][0]*a[2][1]-a[2][0]-a[1][1]))
)
print(d)
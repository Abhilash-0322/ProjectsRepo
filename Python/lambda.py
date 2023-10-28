sum=lambda x,y: x + y
print(sum(2,3))
def new(sum,value):
    for i in range (value):
        sum+=sum
    return sum
print(new(sum(2,3),3))
def cube(x):
    return x*x*x
print(cube(2))
l=[2,3,4,5,6,7,8,9]
newl=[]
for items in l:
    newl.append(cube(items))
print(newl)
#same as above
newl2=set(map(cube,l))
print(newl2)
def filterfunction(a):
    return a>4
newl3=list(filter(lambda i:i+2,l))
print(newl3)
from functools import reduce
numbers=[1,2,3,4,5,6,7,8]
sum1=reduce(lambda x,y:x*y,numbers)
print(sum1)
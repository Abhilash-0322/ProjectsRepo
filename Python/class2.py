import os
class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
i=1
while bool(i):
    student =person(input("enter the name: "),int(input("enter the age: ")))
    print(i,student.name)
    # with open ('class2.txt','a','uft-8') as f:
    #     f.writelines(student.name)
    i+=1
print(int(input("enter your no:"))*3)
scores=[34,39,40]
avg=sum(scores)/len(scores)
print(f"The Avg of Scores is {avg:.5f}")
from sys import argv
for arg in argv:
    print(arg)
import csv
with open("phonebook.csv",'a')as file:
    name=input("Name:")
    number=input("number:")
    writer=csv.writer(file)
    writer.writerow([name,"         ",number])

# class Human:
#     name="Ape"
#     age=1000000
#     work="growth"
#     def info(self):
#         print(self.age)
# a=Human()
# print(a.name)
# a.info()
# b=Human()
# b.name="chim"
# b.age=100000
# b.info()
# class library:
#     def__init__()
class employee:
    company="apple"
    def show(self):
        print(f"company is called {self.company}")
    def changeCompany(cls,newCompany):
        cls.company=newCompany
e1=employee()
e1.name="Harry"
e1.changeCompany("Tesla")
e1.show()
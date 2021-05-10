class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def func(self):
        print("My Name is "+self.name)
        print("My Age is "+self.age)

p1 = Person("Ritik",'20')
p1.func()


#  Write a python program to read student_name and mark from keyboard and store the data in a text file with an unique student_id .

import random

id = random.randint(1000, 9999)
li = []

class Student:
    def __init__(self, id, name, mark):
        self.id = id
        self.name = name
        self.mark = mark

    def __str__(self):
        return f"ID: {self.id} Name: {self.name} Mark: {self.mark}"

obj = Student(id, input("Enter name: "), input("Enter mark: "))
li.append(obj)

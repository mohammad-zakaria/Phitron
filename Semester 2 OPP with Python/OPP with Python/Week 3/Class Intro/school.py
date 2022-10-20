class Student:
    def __init__(self, name, age, id):
        self.name = name
        self.age = age
        self.id = id

class Course:
    def __init__(self, name, teacher):
        self.name = name
        self.teacher = teacher
class Teacher:
    def __init__(self, name, course):
        self.name = name
        self.course = course

class School:
    def __init__(self, name, teachers, courses, students):
        self.name = name
        self.teachers = teachers
        self.courses = courses
        self.students = students

    def get_students(self):
        for student in self.students:
            print(student.name)


    
school_name = 'Phitron'
ds_course = Course('Data Science', 'Zack')
ds_teacher = Teacher('Zack', ds_course)

python_course = Course('Python', 'John')
python_teacher = Teacher('John', python_course)

teachers = [ds_teacher, python_teacher]

student1 = Student('Usha', 20, 30)
student2 = Student('Mary', 21, 2)
student3 = Student('Zack', 22, 25)


my_school = School(school_name, teachers, [ds_course, python_course], [student1, student2, student3])
print(my_school.students)
my_school.get_students()


#  define a static method
# all the members of class are by default p
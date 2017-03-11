
if(0):
	class A:
		def __init__(self):
			print("In __init__ function")
			self.x = 10
			self._y = 20
			self.__z = 30
			print(self.__z)


		def fn1(self):
			print("In fn1 method")
		def _fn2(self):
			print("In _fn2 method")
			self.__fn3()
		def __fn3(self):
			print("In __fn3 method")

	m = A()
	print(m.x)
	print(m._y)
	#print(m.__z) ---> we can't access the private attributes
	print(m._A__z)
	m.fn1()
	m._fn2()

if(0):
	class shape:
		def __init__(self,x,y):
			self.x = x
			self.y = y
		def area(self):
			return self.x * self.y
		def perimiter(self):
			return 2*self.x * 2*self.y

	class square(shape):
		def __init__(self,x):
			self.x = x
			self.y = x

		def perimiter(self):
			return 2*self.x

	class double_square(square):
		def __init__(self,y):
			self.x = y
			self.y = 2*y
		def perimeter(self):
			return 2*self.x + 3*self.y


	myshape = double_square(10)
	print(myshape.area())
	print(myshape.perimiter())
	print(myshape.perimeter())


#multiple inheritances
if(0):
	class ob1:
		def __init__(self,x):
			self.x = x
		def sqrt(self):
			return self.x * self.x
	class ob2:
		import math
		def __init__(self,y,z):
			self.x = y
			self.y = z
		def pow(self):
			return pow(self.x,self.y)
	class ob3(ob1,ob2):
		def __init__(self,a,b):
			self.x = a
			self.y = b
		
	myob = ob3(2,3)
	print(myob.sqrt())
	print(myob.pow())

if(0):
	class ob1:
		def __init__(self,x):
			self.x = x
		def sqrtt(self):
			return self.x ** self.x
	class ob2:
		import math
		def __init__(self,y,z):
			self.x = y
			self.y = z
		def sqrtt(self):
			return pow(self.x,self.y)
	class ob3(ob2,ob1):
		def __init__(self,a,b):
			self.x = a
			self.y = b
		
	myob = ob3(2,3)
	print(myob.sqrtt())

#Employee

if(0):
	class Employee:
		empcount = 0
		def __init__(self):
			Employee.empcount+=1
		def displaycount(self):
			return Employee.empcount

	emp1 = Employee()
	print(emp1.displaycount())
	emp2 = Employee()
	print(emp2.displaycount())


# adding salary
if(0):
	class Employee:
		empcount = 0
		def __init__(self,salary):
			Employee.empcount+=1
			Employee.salary = salary
		def displaycount(self):
			return Employee.empcount
		def displaysalary(self):
			return self.salary

	emp1 = Employee(10000)
	print(emp1.displaycount())
	print(emp1.displaysalary())
	emp2 = Employee(20000)
	print(emp2.displaycount())
	print(emp2.displaysalary())

if(0):
	class Number:
		def __init__(self,start):
			self.data = start
		def __sub__(self,other):
			return Number(self.data - other)
		def displaydata(self):
			return self.data
	
	x = Number(7)
	print(x.displaydata())
	y = x-4
	print(y.displaydata())

if(0):
	class Employee:
		empcount = 0
		def __init__(self,salary):
			Employee.empcount+=1
			Employee.salary = salary
		@staticmethod
		def displaycount(self):
			return Employee.empcount
		def displaysalary(self):
			return self.salary

	emp = Employee(100)
	print(Employee.displaycount(1))

if(0):
	class Number:
		def __init__(self,start):
			self.data = start
		def __sub__(self,other):
			return Number(self.data - other)
		def __sub__(self,other):
			return Number(self.data + other)
		def displaydata(self):
			return self.data
	
	x = Number(7)
	print(x.displaydata())
	y = x-4
	print(y.displaydata())

if(1):
	class Employee:
		__empcount = 0
		def __init__(self,salary):
			Employee.__empcount+=1
			self.salary = salary
		def displaycount(self):
			return Employee.__empcount
		def displaysalary(self):
			return self.salary

	Employee.empcount = 12
	print(Employee.empcount)
	emp = Employee(100)
	print(Employee.displaycount())
	print(Employee.displaysalary())




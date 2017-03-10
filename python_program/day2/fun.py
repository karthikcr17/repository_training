#! /usr/bin/python3

x = 30
y = 40
def test1():
	'''print the string'''
	print("Iam in test1")

def test2():
	'''return value as string'''
	return "Iam in test2"

def test3(a, b):
	'''print the passing arguments'''
	print(a,b)

def test4(a, b):
	'''print the passing arguments that are created in global'''
	print(a, b)

def test5(a, b):
	print(a, b)

def test6(a, b):
	'''assign argument values time of passing'''
	print(a, b)

def test7(a = 10, b = 20):
	'''assign default values to arguments'''
	print(a, b)

def test8():
	'''print the global value'''
	print(x)

def test9():
	'''print the global value after changing'''
	global x
	x = 60
	print(x)

def fact(num = 1):
	 '''factorial recurstion '''
	 if(num >= 1):
		 return num * fact(num - 1);
	 else:
		 return 1
	
def fn1():
	print("outside")
	def fn2():
		print("inside")
	fn2()

def dcttest(dct2):
	dct2[10] = 50
	dct2["sachin"]+=3
	print(dct2)

'''dct1 = {10:20,"sachin":99}
print(dct1)'''
def dcttest(dct2):
	dct3 = dct2.copy()
	dct3[10] = 50
	dct3["sachin"]+=3
	print(dct3)
'''dcttest(dct1)
print(dct1)'''

def test12(*pos, **kwd):
	'''veriable length arguments'''
	print("positional",pos)
	print("keyword",kwd)

#error syntax assign default first right hand side
'''def test13(a=10,b):
	print(a)
	print(b)'''

'''test13(a,b=20)'''


'''test12(10,20,a=50,b=60)
test12(10,20)
test12(a=50,b=60)'''



'''test1()

st = test2()
print(st)

test3(10, 20)

test4(x,y)
test5(a = 10, b = 20)
test6(b = 20, a = 30)
test7()
test8()
test9()
print(x)'''

 


		

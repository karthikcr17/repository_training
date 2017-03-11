import math

def add(num1,num2):
	'''adding two number 
			add(num1,num2)--->return int '''
	return num1 + num2
def sub(num1,num2):
	'''sub two number 
			sub(num1,num2)--->return int '''
	return num1 - num2
def mul(num1,num2):
	'''mul two number 
			mul(num1,num2)--->return int '''
	return num1 * num2
def div(num1,num2):
	'''division two number 
			div(num1,num2)--->return float '''
	return num1 // num2

def sin(red):
	'''return the sine value given radians
			sin(rad) ----->return float '''
	return math.sin(math.radians(red))
def cos(red):
	'''Give value cos
			sin(rad) ----->return float '''
	return math.cos(math.radians(red))
def sqrt(num):
	'''Give value squre root
			sqrt(num) ----->return float '''
	return math.sqrt(num)
def power(num):
	'''return power of given number
			power(num) ----->return int '''
	return math.pow(num)

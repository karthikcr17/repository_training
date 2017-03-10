import sys
import os
sys.path.append('/home/karthik//python_program/modules')
import cal

while(1):
	os.system('clear')
	str1 = '  CALCULATOR  '
	print('#'.center(50,'#'))
	print(str1.center(50,'#'))
	print('#'.center(50,'#'))
	print('MENU'.center(50,' '))
	print('1.Simple calculator')
	print('2.Sci calculator')
	print('3.Exit')
	choice = int(input("enter the choice\n"))
	if(choice == 1):
		os.system('clear')
		while(1):
			print('_'.center(50,'_'))
			print('Simple calculator'.center(50))
			print('_'.center(50,'_'))
			print('MENU'.center(50,' '))
			print('1.add')
			print('2.sub')
			print('3.mul')
			print('4.div')
			print('5.Go back')
			choice1 = int(input("enter the choice\n"))
			
			if(choice1 == 1):
				num1 = int(input("enter the number1\n"))
				num2 = int(input("enter the number2\n"))
				res = cal.add(num1, num2)
				print("The result of add of two numbers",res)
			elif(choice1 == 2):
				num1 = int(input("enter the number1\n"))
				num2 = int(input("enter the number2\n"))
				res = cal.sub(num1, num2)
				print("The result of sub of two numbers",res)
			elif(choice1 == 3):
				num1 = int(input("enter the number1\n"))
				num2 = int(input("enter the number2\n"))
				res = cal.mul(num1, num2)
				print("The result of mul of two numbers",res)
			elif(choice1 == 4):
				num1 = int(input("enter the number1\n"))
				num2 = int(input("enter the number2\n"))
				res = cal.div(num1, num2)
				print("The result of div of two numbers",res)
			elif(choice1 == 5):
				break
			else:
				print("enter the correct choice")
	elif(choice == 2):
		os.system('clear')
		while(1):
			print('_'.center(50,'_'))
			print('Sci calculator'.center(50))
			print('_'.center(50,'_'))
			print('MENU'.center(50,' '))
			print('1.Sin')
			print('2.Cos')
			print('3.Sqrt')
			print('4.Power of')
			print('5.Go back')
			choice1 = int(input("enter the choice\n"))
			
			if(choice1 == 1):
				red = int(input("enter the radian\n"))
				res = cal.sin(red)
				print("The result of sin(%d) = %d"%(red,res))
			elif(choice1 == 2):
				red = int(input("enter the radain\n"))
				res = cal.cos(red)
				print("The result of cos(%d)=%d"%(red,res))
			elif(choice1 == 3):
				num = int(input("enter the number\n"))
				res = cal.sqrt(num)
				print("The result of sqrt",res)
			elif(choice1 == 4):
				num = int(input("enter the number\n"))
				res = cal.power(num)
				print("The result of power",res)
			elif(choice1 == 5):
				break		
			else:
				print("enter the correct choice")
			
	elif(choice == 3):
		break	
	else:
		print("enter the correct choice")




while(1):
	print("1.given no is 100 or greater or less\n2.print 1 to 10")
	print("3.print 1 to 5\n4.print 1 to 10 except 5")
	print("5.day of the week\n6.exit")
	choice = int(input("enter the choice 1.exp1 2.exp2 3.exp3 4.exp4 5.exp5\n"))

	if(choice == 1):
		num = int(input("enter the number\n"))
		if(num == 100):
			print("number is 100")
		elif(num > 100):
			print("number is greater than 100")
		elif(num < 100):
			print("number is less than 100")

	elif(choice == 2):
		print("numbers")
		i = 1
		while(i <= 10):
			print(i)
			i = i + 1

	elif(choice == 3):
		print("numbers")
		i = 1
		while(i <= 10):
			if(i > 5):
				break
			print(i)
			i = i + 1

	elif(choice == 4):
		print("numbers")
		i = 1
		while(i <= 10):
			if(i == 5):
				i = i + 1
				continue
			print(i)
			i = i + 1

	elif(choice == 5):
		day = input("enter the day \n")
		day = day.lower()
		if(day == 'monday' or day == 'tuesday' or day == 'wendesday' or day == 'thrusday' or day == 'friday'):
			print("working day")
		elif(day == 'saturday'):
			print("go to office")
		elif(day == 'sunday'):
			print("go to office")
		else:
			print("enter the correct day")
			

	elif(choice == 6):
		break
		
	else:
		print("enter the correct choice")


	
	
	
	
		
		 



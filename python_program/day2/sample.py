#! /usr/bin/python

import os
import math
import sys

#print number in different forms
if(0):
	num = int(input("enter the number \n"))
	print(hex(num))
	print(oct(num))
	print(bin(num))

#print Pi and sin90 values
if(0):
	print(math.pi)
	print(math.sin(math.radians(90)))

#clear screen
if(0):
	os.system('clear')

#print version
if(0):
	ver = sys.version
	print(ver)

#change directory
if(0):
	os.chdir('/home/karthik/python')
	path = os.getcwd()
	print(path)
	
#print the prime numbers
if(1):
	choice = int(input("enter choice to 1.To print num of prime numbers\n2.with in that range\n"))
	if(choice == 1):
		num = int(input("enter the number \n"))
		i = 0
		while(num):
			j = 1
			count = 0
			while(j <= i):
				if(i % j == 0):
					count = count + 1
				j = j + 1
			if(count == 2):
			# enable when u use python 
			#	print(i,end='') 
			# enable when u use python 
				print i,       
				num = num - 1
			i = i + 1
	elif(choice == 2):
		num = int(input("enter the number \n"))
		for num in range(1,num+1):
			j = 1
			count = 0
			while(j <= num):
				if(num % j == 0):
					count = count + 1
				j = j + 1
			if(count == 2):
		# enable when u use python3 
		#		print(num,end='') 
		#enable when u use python 
				print num,       
			num = num - 1
			
	else:
		print("enter the correct choice")
		
#command line arguments
if(0):
	num1 = int(sys.argv[1])
	num2 = int(sys.argv[2])

	print("sum of numbers is",num1 + num2)

		







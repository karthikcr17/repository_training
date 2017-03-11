#!/usr/bin/python3

import sys
import os
import phone
#from phone import pots
#cat command implementation
if(0):
	if(len(sys.argv) == 2):
		if(os.path.isfile(sys.argv[1])):
			f1 = open(sys.argv[1],'r')
			
			List = f1.readlines()
			lines = len(List)
			i = 0
			while(i < lines):
				sys.stdout.write(List[i])
				i+=1
			f1.close()
		else:
			print("file is not present")

	else:
		print("invalid number of argument")

#cp command implementation
if(0):
	if(len(sys.argv) == 3):
		if(os.path.isfile(sys.argv[1])):
			f1 = open(sys.argv[1],'r')
			f2 = open(sys.argv[2],'w')
			
			List = f1.readlines()
			lines = len(List)
			i = 0
			while(i < lines):
				f2.write(List[i])
				i+=1
			f1.close()
		else:
			print("file is not present")
	else:
		print("invalid number of argument")
	
#wc command implementation
if(0):
	if(len(sys.argv) == 2):
		if(os.path.isfile(sys.argv[1])):
			f1 = open(sys.argv[1],'r')
			
			string = f1.read()
			byte = len(string)
			words = len(string.split())
			f1.seek(0)
			string1 = f1.readlines()
			lines = len(string1)
		
			print("no.of bytes in file",byte)
			print("no.of words in file",words)
			print("no.of lines in file",lines)
		
			f1.close()
		else:
			print("file is not present")
	else:
		print("invalid number of argument")

#open a file write and read in the fileif(1):
if(0):
	if(len(sys.argv) == 2):
		f1 = open(sys.argv[1],'w+')
#		string = input("enter the string to write into file\n") #this works only python3
		string = raw_input("enter the string to write into file\n")
		f1.write(string)
		f1.seek(0)
		print(f1.read())
	
		f1.close()
	else:
		print("invalid number of argument")


if(1):
	print(phone.isdn())
	print(phone.pots())
	print(phone.g3())




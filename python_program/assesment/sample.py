
#! /usr/bin/python

if(0):
	c = 26**10
	print c/100

if(0):
	print ['Month','Python']*20
	sent1 = raw_input()

	print 3*sent1 
	print sent1*3 
#above are equal
if(0):
#text4 taking as a string during runtime
	text4 = raw_input("enter the input\n")
	print set(text4)
	print len(set(text4))
#first it converts string to set in accending order and calculates the length os set

if(0):
	my_string = 'My_string'
	my_string
	print my_string

if(0):
	my_string = 'My_string'
	print my_string + ' ' +  my_string


if(0):
	mysent = ["My","string"]
	str1 = ''.join(mysent)
	print str1
	List = str1.split()
	print List
if(0):
	pharse1 = ["abc","cde","egf"]
	pharse2 = ["xyz","qrs","zes","asx"]
	pharse3 = ["exs","ghj","san"]
	print pharse1 + pharse2
#	print pharse1 - pharse2 not supported by list '-'
#	print pharse1 * pharse2 not suported by list
#	print pharse1 ** pharse2 not supported by list ** and pow()

	print len(pharse1 + pharse2)#both are equal
	print len(pharse1) + len(pharse2)

if(1):
	w = '1'
	print w.isupper() #this function checks given letter is upper or not
	print not w.lower() #this returns true except lower case letters


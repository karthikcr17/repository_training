#3). 
if(0):
	print ["month" "python"] #print the list  20 times  without any space
	print 3*"sent1"  #sent1 is printed 3 times
#	print  3*sent1 
#1) 
if(0):
	print 12/(4+1) #gives integer value as output
#4)
if(0): 
	print len(set("my_string"))
	print len(set("my_string + my_string"))

#5) 
if(0):
	s = "array of characters"
	print s
# ----->a) s----> 'array of characters'\
#--------->print s----> print contents of s ...array of charcters
	s =  s+s
	print s
	s = s+' ' + s
	print s
	s = 'array of characters'
	s = s*2
	print s
	print (s + " ") *2
	
#>b)if s + s  and s*2 will repeate two strings continuously without any space ....the original string does not change
#6) 
if(0):
	m = raw_input("enter the list")
	l = ' '.join(m)
	print l
	m = l.split()
	print m
	print l.split(" ")	


#--------------------------------------------------------------------
#7) 
if(0):
	p1 = ['a','b','c','d','e','f']
	print p1
	p2 = ['x','y','z']
	print p2
	print p1 + p2; print p2 + p1
	print (len(p1) + len(p2)) ; print len(p2 + p1)
#			len(p1+p2) == len(p2+p1)
#9)
if(0):
	w = raw_input("enter the text :")
	print w.isupper()
	print not w.islower() 
#8)
if(0):
	text = "karthik"
	print sorted(set([w.lower() for w in text]))
	print sorted([w.lower() for w in set(text)]) 
	#both gives same output
#10
if(0):
	t = "karthik"
	print t[-2:]
	text = "intelligence of things"
	print text.split()[-2:]
#13
if(0):
	text = "global edge software limited"
	print sum([len(t) for t in text])
#2)
if(0):
	print 26 ** 10
	print 26 **100
#14)
if(1):
	import PyDictionary
	import enchant
	d = enchant.Dict("en_US")
	def fun(text):
		if d.check(text):
			return len(text)

	text = raw_input("enter the text: ")
	l = fun(text)
	print l
		
#15)
if(0):
	text = "global edge edge global edge"
	print (float(text.split().count("edge")) / float(len(text.split()))) * 100
#17)
if(0):
	text = "colorless"
	print text
	text = text[0:4] + 'u' +text[4:]
	print text
#20)
if(0):
	import urllib
	print"enter the valid url"
	f = urllib.urlopen(raw_input('enter any url'))
	print f.read()
#21)
if(0):
	words = raw_input("enter the input :")
	print sorted(words) #prints the sorted result but does not holds it
	words.sort() #preserves the result
	print words

#22)
if(0):
	from test import msg
	print msg

	
#11)
if(0):
	lst = ['size','price','Hello','preethi', 'zebra','Ppt', 'pt']
	print lst
	l = []
	z = []
	print "Ending in ize"
	for w in lst:
		if w.endswith('ize'):
			l.append(w)
	print l
	print "containing the letter z"
	for w in lst:
		if 'z' in w:
			z.append(w)
	print z
	print "containing the sequence of letters pt"
	for w in lst :
		if 'pt' in w:
			print w
	print "title case"
	for w in lst:
		if w.istitle():
			print w
#using regular expression
if(0):
	import re
	lst = "size price Preethi zebra Ppt ptpt pttttt ize izy"
	print "ending with ize :", re.findall('[a-zA-Z]*ize', lst)
	print "containing the letter z", re.findall('[a-zA-Z]*z+[a-zA-Z]*', lst)
	print "containing the sequence of pt", re.findall('[a-zA-Z]*pt+[a-zA-Z]*',lst)
	print "titlecase", re.findall('[A-Z][a-z]*',lst)


#12)
if(0):
	lst = ['she', 'shells','sea', 'by', 'the','sea','shore']
	for w in lst:
		if w.startswith('sh'):
			print w
	for w in lst:
		if(len(w) >  4):
			print w
#16)
if(0):
	text = raw_input("enter the text : ")
	sent = raw_input("enter the sentence :")
	print set(text)
	print text
	print set(sent)
	print sent
	print set(text) < set(sent)#checks whether text is a subset of set
	print set(text).issubset(set(sent))
#25)
if(0):
	lst = ['After', 'all', 'is', 'said','and', 'done', ',', 'more','is','said', 'than','done']
	lengths = []
	for ele in lst:
		lengths.append(len(ele))
	print lengths
#26)
if(0):
	silly = 'newly formed bland ideas are inexpressible in an infuriating way'
	bland = silly.split()
	print"a)", bland
	word = ''
	for sec in bland:
		word = word + sec[1]
	print "b)",word
	
	print "c)", ' '.join(bland)
	print "d)"
	for ele in sorted(bland):
		print ele
#------------------------------------------------------------------------------------------

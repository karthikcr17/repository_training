def stck_push(List):
	num=input("enter insert value\n")
	List.append(num)
	return;
def stck_pop(List):
	num=List.pop()
	print "number pop",num
	return;
def en_que(List):
	num=input("enter insert value\n")
	List.append(num)
	return;
def de_que(List):
	num=List.pop(0)
	print "number pop",num
	return;

List=[1,2,3]
while (1):
	op=input("enter the option 1.stack 2.queue 3.display 4.exit \n")
	if (op == 1):
		op1=input("enter the option 1.push 2.pop \n")
		if(op1 == 1):
			stck_push(List)
		elif(op1 == 2):
			stck_pop(List)
		else:
			print "invalid"
	elif (op == 2):
		op1=input("enter the option 1.en_qu 2.de_qu \n")
		if(op1 == 1):
			en_que(List)
		elif(op1 == 2):
			de_que(List)
		else:
			print "invalid"
	elif (op==3):
		print List
	elif(op==4):
		break
	else:
		print "invalid option"
	

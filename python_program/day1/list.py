L = [10, "hii", "20"]

while(1):
	print("enter the choice")
	print("1.print the list")
	print("2.print ele by ele")
	print("3.inset value at beg")
	print("4.insert value at pos 1")
	print("5.insert value at end")
	print("6.delet at pos 1")
	print("7.delet at given pos and print")
	print("8.delet ele by ele")
	print("9.print no.of elements")
	print("10.exit")
	
	choice = int(input())
	
	if(choice == 1):
		print(L)
	elif(choice == 2):
		print("values in list")
		for ele in L:
			print(ele)
	elif(choice == 3):
		num = int(input("enter the value insert at beg\n"))
		L.insert(0,num)
	elif(choice == 4):
		num = int(input("enter the value insert at pos 1\n"))
		L.insert(1,num)
	elif(choice == 5):
		num = int(input("enter the value insert at end\n"))
		L.insert(len(L),num)
	elif(choice == 6):
		if(len(L) > 1):
			del L[1]
		else:
			print("pos 1 no ele is present")
	elif(choice == 7):
		pos = int(input("enter the pos to delet\n"))
		if(pos == len(L)):
			print("enter the pos with in this range",len(L))
		else:
			print(L.pop(pos))
	elif(choice == 8):
		 num = int(input("enter the value to delet\n"))
		 L.remove(num)
	elif(choice == 9):
		print("number of elements in list",len(L))
	elif(choice == 10):
		break
	else:
		print("enter the correct choice")
	
	

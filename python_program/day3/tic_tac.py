import os
import sys
test = ((0,1,2),(3,4,5),(6,7,8),(0,3,6),(2,5,8),(0,5,8),(2,5,6),(1,5,7))

List = ['_'for i in range(9)]
player = 1
count = 0
while(1):
	global count
	os.system('clear')
	for i in range(0,9):
		if(i % 3 == 0):
			print
		print i,
	print

	for i in range(0,9):
		if(i % 3 == 0):
			print
		print List[i],
	print

	if(count == 3):
		if(player % 2 == 0):
			print("player1 won")
			sys.exit()
		elif(player % 2):
			print("player2 won")
			sys.exit()
	if(player == 9):
		print("draw")
		break

	if(player % 2):
		val1 = int(input("enter the value player1\n"))
		if(List[val1] != '_'):
			print("nuber already entered")
			continue
		List[val1] = 0
		for j in range(0,8):
			global count
			count = 0
			for k in test[j]:
				if(List[k] == 0):
					count = count + 1
			if(count == 3):
				break
		player = player + 1

	elif(player % 2 == 0):
		val2 = int(input("enter the value player2\n"))
		if(List[val2] != '_'):
			print("nuber already entered")
			continue
		List[val2] = 1
		for j in range(0,8):
			global count
			count = 0
			for k in test[j]:
				if(List[k] == 1):
					count = count + 1
			if(count == 3):
				break
		player = player + 1
	


	
		
	
	
		







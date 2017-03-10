L = [0,1]

print("1.print with in range 2.print given number of numbers")
choice = int(input())

num = int(input("enter the range to print fibonacci \n"))
val = L[len(L) - 1] + L[len(L) - 2]

if(choice == 1):
	while(val < num):
		L.append(val)
		val = L[len(L) - 1] + L[len(L) - 2]
	print(L)
elif(choice == 2):
	while(len(L) < num):
		L.append(val)
		val = L[len(L) - 1] + L[len(L) - 2]
	print(L)
else:
	print("enter the correct choice")
	

List = [10, 20, 30]

#print with List value using negative indexes

if(0):
	num = -len(List)
	for i in range(-1,num-1,-1):
		print(List[i])

#check we can change the or not tuple with in list

List1 = [10,20,(40,50)]
if(0):
	print(List1[0])
	print(List1[1])
	print(List1[2])
	print(List1[2][0])
	print(List1[2][1])
	List1[2] = (100,200)
	print(List1)
'''	List1[2][0] = 100 # we can't assign tuple to value '''

#check if it possible to change value of list in tuple
tuple1 = (10,20,[40,50])
if(0):
	print(tuple1)
	print(tuple1[2])
	print(tuple1[2][0])
	tuple1[2][0] = 100
	print(tuple1)
'''	tuple1[2] = [50,60]	# we can't assign value to tuple '''

#slicing
List2 = [10,20,30,40,50]
if(1):
	print(List2[1:4])
	print(List2[:3])
	print(List2[2:])
	print(List2[:])
	print(List2[1::2])















		


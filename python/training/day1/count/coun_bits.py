List = []
for i in range(-500,500):
	count = 0
	for j in range(31,-1,-1):
		if((i >> j) & 1):
			count = count + 1
	List.append(count % 2)
	
	
	

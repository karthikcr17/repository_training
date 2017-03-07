def show(num):
	for j in range(31,-1,-1):
		print (num >> j)&1,
	return;



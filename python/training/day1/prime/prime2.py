def reverse(num):
	rev = str(num)
	revc = rev[::-1]
	return (rev == revc)
			
for i in range(1,501):
	count = 0
	j = 1;
	while(j <= i):
		if(i%j == 0):
			count = count + 1
		j = j + 1
	if(count == 2):
		res = reverse(i)
		if(res == True):
			print("number is primepalindrom",i)
		

def reverse(num):
	rev = str(num)
	j = 0
	k = len(rev)-1
	while(j < (len(rev)//2)):
		if(rev[k] != rev[j]):
			return False;
		j = j + 1
		k = i - 1
	return True;
			
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
		

import sys
L = []
L1 = []
def count(num):
	N = sys.getsizeof(num)
	for i in range((N*8)-1,-1,-1):
		res=(num >> i)&1
		L.append(res)
	res1 = L.count(1)
	return res1;

def count1(num):
	N = sys.getsizeof(num)
	for i in range((N*8)-1,-1,-1):
		res=(num >> i)&1
		L1.append(res)
	res1 = L1.count(0)
	return res1;
num=int(raw_input("entr the number\n"))
print "no.of set bits",count(num)
print "no.of clear bits",count1(num)
	

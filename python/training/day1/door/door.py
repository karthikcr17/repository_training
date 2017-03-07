L = []
for i in range(0,51):
	L.append(1)
j = 2
while(j <= 50):
	for k in range(j,51,j):
		if(L[k] == 1):
			L[k] = 0
		else:
			L[k] = 1
	j = j + 1

for l in range(1,51):
	if(L[l] == 1):
		print("open door",l)


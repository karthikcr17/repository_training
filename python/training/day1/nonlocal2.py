a=0
def outer():
	a=12
	def inner():
		nonlocal a
		a=10	
		print(a)
	inner()
	print(a)
outer()
print(a)

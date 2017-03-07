def outer():
	a=12
	def inner(a=a):
		a+=10
		print(a)
	inner()
outer()

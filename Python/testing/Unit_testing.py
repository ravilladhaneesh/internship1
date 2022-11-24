
def add(a,b):
	return a+b

def sub(a,b):
	return a-b
	
def mul(a,b):
	return a*b

def div(a,b):
	if b==0:
		raise ValueError('divided by 0 error')
		
	return a//b

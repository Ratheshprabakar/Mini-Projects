def main():
	print("Enter the three numbers")
	a=[int(x) for x in input().split()]
	a.sort()
	if((a[0]*a[0])+(a[1]*a[1])==a[2]*a[2]):
		print("Pythagorean Triples")
	else:
		print("Not Pythagorean Triples")

if __name__=='__main__':
	while(1):
		main()
	
	

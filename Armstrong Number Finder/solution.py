def armstrong_finder(number):
	temp=temp_number=number
	count=0
	total=0
	while(number>0):
		count=count+1
		number=number//10
	while(temp_number>0):
		total+=(pow(temp_number%10,count))
		temp_number//=10
	if(total==temp):
		return True
	else:
		return False
def main():
	number=int(input("Enter the number\t"))
	print(armstrong_finder(number))
if __name__=='__main__':
	main()

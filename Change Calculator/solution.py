def main():
	while(1):
		amount=int(input("\n\nEnter the total amount given by the user\t"))
		price=int(input("Enter the total cost of the item\t"))
		if(amount<price):
			print("OOPS!, Ask the user to give",price-amount,"amount")
		else:
			print("Please give the",amount-price,"to the user")

if __name__=='__main__':
	main()

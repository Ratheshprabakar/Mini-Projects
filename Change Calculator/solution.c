#include<stdio.h>
int main()
{
	int total, price;
	while(1)
	{
		printf("\n\n\nEnter the Total amount given by the user\t");
		scanf("%d",&total);
		printf("Enter the Total cost \t");
		scanf("%d",&price);
		(total<price)?printf("OOPS! The user need to give \t %d",price-total):printf("The Remaining change need to give is \t %d",total-price);
	}

}

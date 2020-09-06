#include<stdio.h>
int armstrong_finder(int number);
int number;
int main()
{
	int x;
	printf("Enter the Number\t");
	scanf("%d",&number);
	x=armstrong_finder(number);
	(x==1)?printf("\nArmstrong Number"):printf("\nNot an Armstrong Number");
}
int armstrong_finder( int number)
{
	int temp,count=0,sum=0,temp_number;
	temp=temp_number=number;
	while(temp>0)
	{
		count++;
		temp/=10;		
	}
	while(number>0)
	{
		sum +=(pow(number%10,count));
		number/=10;		
	}
	if(sum==temp_number)
	{

		return 1;
	}
	else
		return 0;
}

#include<stdio.h>
int main()
{
	int number,count=0,guess,choice;
	srand(time(0)); 
        number = (rand() % (100 - 1 + 1)) + 1; //Generate a random number in the range of (1,100)
	printf("\n----Welcome to Higher Lower Prediction game----\n");
	while(number!=guess)
	{
		count++;
		printf("\nEnter your guess\t");
		scanf("%d",&guess);
		if(guess>number)
			printf("\nWooHoo, You guess it high");	
		else if(guess==number)
		{
			printf("\nCongratulations, Your guess is correct, You took %d guesses to find out the number",count);
			printf("\nDo you want to continue of exit or continue\n1)Continue\n2)Exit\n");
			scanf("%d",&choice);
			(choice==1)?main():exit(1);
		}	
		else		
			printf("\nYour guess is to low");
	}
		
				
}

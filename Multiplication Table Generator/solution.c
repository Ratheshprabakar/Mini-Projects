#include<stdio.h>
int main()
{
	int n,i;
	while(1)
	{
		printf("\nEnter the Number\t");
		scanf("%d",&n);
		for(i=1;i<=50;i++)
		{
			printf("\n%d X %d = %d",i,n,i*n);
		}
	}	
}

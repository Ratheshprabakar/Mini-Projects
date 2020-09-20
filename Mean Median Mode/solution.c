#include<stdio.h>
int *array;
int sum=0;
int main()
{
	int n,i;
	printf("Enter the no of elements\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	mean_medain_mode(n);
	free(array);
}
void mean_medain_mode(int n)
{
	int i,j,flag=1,max_element=0,max=0;		
	printf("\nMean : %d",sum/n);
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(array[j]>array[j+1])
			{
				array[j]=array[j]^array[j+1];
				array[j+1]=array[j]^array[j+1];
				array[j]=array[j]^array[j+1];
				flag=1;	
			}
		}	
	}
	int hash[100]={0};
	(n%2==0)?printf("\nMedian : %d",((array[(n-1)/2]+array[((n-1)/2)+1]))/2):printf("\nMedian : %d",array[(n-1)/2]);
	for(i=0;i<n;i++)
	{
		hash[array[i]]++;
		if(hash[array[i]]>max)
		{
			max_element=array[i];
			max=hash[array[i]];
		}
	}
	printf("\nMode : %d",max_element);	
}

#include<stdio.h>
int a,b,c,max,result;
int pythogorean_triples_checker(int max,int a, int b);
int main()
{
	
	printf("Enter the three sides\t");
	scanf("%d\t%d\t%d",&a,&b,&c);
	result=(a>b)?((a>c)?pythagorean_triples_checker(b,c,a):pythagorean_triples_checker(a,b,c)):((b>c)?pythagorean_triples_checker(a,c,b):pythagorean_triples_checker(a,b,c));
	(result==1)?printf("Pythagorean Triple"):printf("Not Pythagorean Triple");
}
int pythagorean_triples_checker(a,b,max)
{
	if(((a*a) + (b*b))==(max*max))
		return 1;
	else
		return 0;
}

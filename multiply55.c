#include<stdio.h>
int main()
{
	int n,m,even,odd,mul;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the value of m");
	scanf("%d",&m);
	mul=n*m;
	printf("multiply of %d and %d =  %d",n,m,mul);
	if(mul%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}

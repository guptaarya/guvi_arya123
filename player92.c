#include<stdio.h>
int main()
{
	long int a,i,n,x=0;
	printf("enter the value of n");
	scanf("%ld",&n);
	
	for(i=0;n!=0;i++)
	{
		a=n%10;
		x=(a)*(pow(2,i))+x;
		n=n/10;
		
	}
	printf("%ld",x);
	return 0;
}


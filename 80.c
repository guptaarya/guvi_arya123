#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("enter the numbers");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	n=sum;
	while(n!=0)
	{
		rem=n%10;
		if(n%2==1)
		{
			printf("%d",rem);
		}
		n=n/10;
	}
	return 0;
}

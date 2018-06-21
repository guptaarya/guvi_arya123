#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("enter a number");
	scanf("%d",&n);
	if(n%13==0)
	{
	flag = 1;	
	}
	if(flag==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}

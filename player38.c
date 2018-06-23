#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(i%2==0 && n%i==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}

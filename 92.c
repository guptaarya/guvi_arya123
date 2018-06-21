#include<stdio.h>
int main()
{
	int n,i,e,sum=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements");
	scanf("%d",&e);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
		printf("\nsum is %d",sum);
	}
	return 0;
}

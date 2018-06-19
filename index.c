#include<stdio.h>
int main()
{
	int i,n,a[10];
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d %d",a[i],i);
	}
	return 0;
}

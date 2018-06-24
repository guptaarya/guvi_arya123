#include<stdio.h>
int main()
{
	int n,k,i,;
	int a[100];
	printf("enter the value of n and k");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-k;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a[100],i,n,count=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			count=count+1;
		}
		if(a[i]>a[i+1])
		{
			break;
			
		}
	}
	printf("%d",count);
	return 0;
}

#include<stdio.h>
int main()
{
	int i,n,a[n],sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			sum=sum+a[i];
		}
		else
		{
			sum=sum+a[i+1];
		}
		
	}
	printf("%d",sum);
	return 0;
}

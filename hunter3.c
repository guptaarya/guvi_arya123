#include<stdio.h>
int main()
{
	int i,j,a[100],n,temp,count=0;
	printf("enter the value of n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			count++;
		}
	}
	if(count>0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==i)
			{
				printf("%d",a[i]);
			}
		}
	}
	else
	printf("-1");
	return 0;
}

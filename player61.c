#include<stdio.h>
int main()
{
	int n,x,i,j,flag=0,sum;
	int a[100];
	printf("enter the value of n and k");
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			if(sum==x)
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j,n,k,count=1;
	int a[100];
	printf("enter the value of n and k");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
		}
	
	if(count==k)
	{
		printf("%d",a[i]);
		break;
	}
}
}

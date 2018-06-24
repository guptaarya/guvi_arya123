#include<stdio.h>
int main()
{
	int n,k,i,j,temp;
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
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<k)
		{
			printf("%d",a[i]);
		}
	
	
	}
	return 0;
}

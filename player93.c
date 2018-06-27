#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n-1;i+=2)
	{
		for(j=i+1;j<n;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}

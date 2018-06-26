#include<stdio.h>
int main()
{
	int i,n,j,res,max=0;
	int a[n];
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			res=(a[i])&(a[j]);
			if(res>max)
			{
				max=res;
			}
		}
	}
	printf("%d",res);
	return 0;
}

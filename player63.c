#include<stdio.h>
int main()
{
	int i,j,n,a1[100],a2[100];
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a1[i]);
}
printf("\n");
for(j=0;j<n;j++)
{
	scanf("%d",&a2[i]);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a1[i]==a2[i])
		{
			printf("%d",a1[i]);
		}
	}
}
return 0;
}

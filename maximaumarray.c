#include<stdio.h>
int main()
{
	int i,j,a[10],temp,n;
	printf("enter the array of number");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		
		}
	}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
	}
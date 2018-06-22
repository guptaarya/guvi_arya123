#include<stdio.h>
int main()
{
int i,n,temp,a[10];
printf("enter the array");
scanf("%d",&a[i]);
n=strlen(a);
if(n%2==0)
{
	for(i=0;i<n;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		
	}
	printf("yes");
}
else
{
	for(i=0;i<n;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	printf("%s%c",a,temp);
	
}
return 0;n
}

#include<stdio.h>
int main()
{
	int i,a,b,c,flag =0;
	printf("enter the value of a,b");
	scanf("%d%d",&a,&b);
	c=a*b;
	for(i=1;i<=c/2;i++)
	{
	if(i*i==c)
	{
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

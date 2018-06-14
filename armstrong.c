#include<stdio.h>
int main()
{
	int r,s=0,x,n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	x=i;
	while(x!=0)
	{
	r=x%10;
	s=s+r*r*r;
	x=x/10;
	
}
	}
	if(s==i)
	{
	printf("armstrong number");	
	}
	else
	{
		printf("not armstrong number");
	return 0;
}
}

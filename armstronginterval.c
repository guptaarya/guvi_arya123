#include<stdio.h>
int main()
{
	int r,s=0,x,n1,n2,i;
	printf("enter the number");
	scanf("%d %d",&n1,&n2);
	for(i=n1+1;i<=n2;i++)
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

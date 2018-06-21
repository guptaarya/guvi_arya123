#include<stdio.h>
int main()
{
	int n,m,even,odd,c;
	printf("enetr the value of n and m");
	scanf("%d%d",&n,&m);
	c=n+m;
	if(c%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}

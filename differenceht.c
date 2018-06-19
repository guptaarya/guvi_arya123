#include<stdio.h>
int main()
{
	int t1,t2,h1,h2,a,b;
	printf("enter the firdt time");
	scanf("%d%d",&t1,&h1);
	printf("enter the second time");
	scanf("%d%d",&t2,&h2);
	a=h1-h2;
	b=t1-t2;
	printf("difference between time and minute is%d:%d",a,b);
	
}

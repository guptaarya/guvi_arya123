#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	a=b;
	b=c;
	c=a;
	printf("after swapping\nx=%d\n",a,b);
	return 0;
}

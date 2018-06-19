#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a ,b");
	scanf("%d%d,&a,&b");
	a=a^b;
	b=a^b;
	a=a^b;
	printf("value of \n%d =%d\n",a,b );
	return 0;
	}

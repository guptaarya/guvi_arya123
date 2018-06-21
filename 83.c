#include<stdio.h>
int main(void)
{
	int n1,n2;
	char s;
	printf("enter the value of n1 and n2");
	scanf("%d%d",&n1,&n2,&s);
	if(s=='/')
	{
	printf("%d\n",n1/n2);
}
else
{
	printf("%d\n",n1%n2);
}
	return 0;
}

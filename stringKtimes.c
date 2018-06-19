#include<stdio.h>
int main()
{
	char a[100];
	int i,n;
	printf("enter the string");
	scanf("%s",a);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("string is entered is %s",a);
	}
	return 0;
}

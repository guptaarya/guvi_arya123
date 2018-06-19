#include<stdio.h>
int main()
{
	char a[10];
	int i,n=0;
	printf("enter the string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			n=n+1;
		}
	}
	printf("\n%d",n);
	return 0;
}

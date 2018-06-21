#include<stdio.h>
int main()
{
	char s[100];
	int i,n,l,p;
	printf("enter the value of n ");
	scanf("%d",&n);
	printf("enter the string");
	scanf("%s",&s);
	l=strlen(s);
	p=l-n;
	for(i=p;i<l;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}

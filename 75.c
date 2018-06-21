#include<stdio.h>
int main()
{
	char s[100];
	int i,n;
	printf("enter a string");
	scanf("%s",&s);
	n=strlen(s);
	if(n%2==0)
	{
		s[n/2]='*';
		s[(n/2)-1]='*';
	}
	else
	{
		s[n/2]='*';
	}
	printf("\n%s",s);
	return 0;
	
}

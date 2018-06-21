#include<stdio.h>
int main()
{
	char s[100];
	int i,n;
	printf("enter the string");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	if(s[i]>='0' && s[i]<='9')
	{
		printf("%c",s[i]);
	}
		
	}
	return 0;
}

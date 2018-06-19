#include<stdio.h>
int main()
{
	char s[100];
	int l,count=1,i;
	printf("enter the string");
	scanf("%[^\n]s",s);
	l=strlen(s);
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			count=count++;
		}
	}
	printf("total space is %d",count);
}

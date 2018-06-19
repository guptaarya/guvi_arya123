#include<stdio.h>
int main()
{
	char s[100];
	int i,l,count=0;
	printf("enter the paragraph");
	scanf("%[^\t\n]s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' .'&&s[i+1]!='\0')
		{
			count++;
		}
	}
	printf("\n no. of lines=%d",count);
	return 0;
}

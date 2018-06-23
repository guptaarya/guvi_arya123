#include<stdio.h>
int main()
{
	char s[100],ch;
	int i;
	printf("enter the string and character");
	scanf("%s %c",s,&ch);
	for(i=0;s[i]='\0';i++)
	{
		if(s[i]==ch)
		{
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}

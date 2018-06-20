#include<stdio.h>
int main()
{
	int i,j;
	char string1[20],string2[30];
	printf("enter string one");
	scanf("%s",&string1);
	printf("enter string second");
	scanf("%s",&string2);
	for(i=0;string1[i]!='\0';i++)
	{
		
	}
	for(j=0;string2[j]='\0';j++)
	{
		string1[i]=string2[j];
		i++;
		string1[i]='\0';
	}
	printf("print string is %s",string1);
	return 0;
}

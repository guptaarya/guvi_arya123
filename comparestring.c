#include<stdio.h>
int main()
{
	char a[100]; 
	char string1[10],string2[20];
	printf("enter first string");
	scanf("%d",&string1);
	printf("enter second string");
	scanf("%d",&string2);
	if(string1>string2)
	{
		printf("\n%s",string1);
	}
	else if(string2>string1)
	{
		printf("\n%s",string2);
	}
	else
	{
		printf("\n%s",string2);
	}
	return 0;
}

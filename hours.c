#include<stdio.h>
int main()
{
	int mins,i,hour;
	printf("enter the limit");
	scanf("%d",&mins);
	if(mins<60)
	{
		printf("%d %d",hour,mins);
	}
	else
	{
		hour=mins/60;
		mins=mins%60;
		printf("%d %d",hour,mins);
		
	}
	return 0;
	
}

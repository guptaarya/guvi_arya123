include<stdio.h>
int main()
{
	int i,a[10],small;
	for(i=0;i<10;i++)
	{
	printf("enter 10 numbers");
	scanf("%d",&a[i]);
}
	small=a[0];
	for(i=0;i<10;i++)
	{
	
		if(a[i]<large)
		{
			small=a[i];
		}
		
	}printf("print large is %d",small);
}

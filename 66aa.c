#include<stdio.h>
int main()
{
	int i,l,c=0;
	printf("enter the number");
	scanf("%d",&l);
	 for(i=1;i<=l;i++){
	 if(l%i==0)
	 {
	 c++;
}
}
if (c==2)
{
	printf("number is prime");
}
else 
{
	printf("number is not prime");
	
}
return 0;
}

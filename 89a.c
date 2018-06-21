#include<stdio.h>
int main()
{
	int a1,a2,gcd,i,lcm;
	printf("enter value of a1 and a2");
	scanf("%d%d",&a1,&a2);
	for(i=1;i<=a1 && i<=a2;i++)
	{
		if(a1%i==0 && a2%i==0)
		{
		gcd=i;
	}
}
lcm=(a1*a2)/gcd;
		printf("lcm of %d and %d is %d",a1,a2,lcm );
		return 0;
	
}

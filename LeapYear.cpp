#include<stdio.h>
main()
{
	int a;
	printf("Enter a integer: \t");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("\n%d is a leap year!",a);
	}
	else
	{
		printf("\n%d is not a leap year!",a);
	}
}

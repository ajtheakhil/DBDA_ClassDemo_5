#include<stdio.h>
main()
{
	int a,b,c;
	char op;
	printf("Enter a the calculation: \t");
	scanf("%d %c %d",&a,&op,&b);
	switch(op)
	{
		case '+':
			c=a+b;
			printf("\n%d",c);
			break;
		case '-':
			c=a-b;
			printf("\n%d",c);
			break;
		case '*':
			c=a*b;
			printf("\n%d",c);
			break;
		case '/':
			c=a/b;
			printf("\n%d",c);
			break;
		default:
			printf("\nEnter a valid input!");
	}
}

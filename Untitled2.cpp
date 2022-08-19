#include <stdio.h>
int main ()
{
	char ch;
	float a,b,c;
	printf ("enter your number:");
	scanf ("%f,%f", &a,&b);
	printf ("enter your choice\n + for addition\n - for subtraction\n * multipication\n / for division");
	scanf (" %c ", &ch);
	switch (ch)
	{
		case '+':
			c=a+b;
			printf ("addition=%f",c);
			break;
		case '-':
			c=a-b;
			printf ("substraction=%f",c);
			break;
		case '*':
			c=a*b;
			printf ("multipication=%f",c);
			break;
		case '/':
			c=a/b;
			printf ("division=%f",c);
			break;
		default:
			printf ("invalid choice");
			
		
			
	}
}

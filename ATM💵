#include <stdio.h>
int main()
{
	char ch;
	float amt,wd,cd;
	printf ("enter amount:");
	scanf ("%f",&amt);
	printf ("enter your choice :\n b for balance\n wd for withdrawn\n c for credit");
	scanf (" %c ",&ch);
	switch (ch)
	{
		case 'b':
			printf ("current balance :%f",amt);
			break;
		case 'c':
			printf ("enter credit amount:");
			scanf ("%f", &cd);
			amt=amt+cd;
			printf ("current balance :%f",amt);
			break;
		case 'w':
			printf ("enter your debit amount:");
			scanf   ("%f", &wd);
			if (wd>amt)
			printf ("insufficient balance");
			else
			{
				amt=amt-wd;
				printf ("current balance:%f",amt);}
				break;
		default:
			    printf ("invalid choice");
			
	
	}
}


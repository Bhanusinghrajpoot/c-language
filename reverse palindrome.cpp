#include<stdio.h>
int main()
{
	int no, b,rev, backup;
	printf ("enter any no:");
	scanf ("%d",&no);
	backup=no;
	while (no!=0)
	{
		b=no%10;
		rev=rev*10+b;
		no=no/10;
	}
	if (backup==rev)
	
	printf ("no is palindrome");
	else
	printf ("no is not palindrome");
}

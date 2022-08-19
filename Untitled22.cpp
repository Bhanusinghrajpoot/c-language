#include <stdio.h>
int main ()
{
	int n;
	printf ("enter your roll number");
	scanf ("%d",&n);
	if (n>=1 && n<=100)
	printf("promote to class 10");
	else if (n>100 && n<=200)
	printf ("promote to class 12");
	else
	printf ("can't promote");

}

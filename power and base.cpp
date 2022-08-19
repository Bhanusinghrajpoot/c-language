#include <stdio.h>
int main()
{
	int i,b,p,f=1;
	printf ("enter base and power no");
	scanf ("%d,%d",&b,&p);
	for (i=1; i<=p; i--)
	{
		f=f*b;
	}
	printf ("result =%d",f);
}

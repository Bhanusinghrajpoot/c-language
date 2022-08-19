#include<stdio.h>
int main()
{
	int i,n;
	printf ("enter any no");
	scanf ("%d",&n);
	printf ("enter your no that you want to factorise\n");
	for (i=1; i<=n; i++)
	{
		if (n%i==0)
		printf (" %d \t",i);
	}
}
	
 
	
	
	


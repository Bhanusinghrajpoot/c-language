#include<stdio.h>

void toh(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n==1)
	{
		printf ("\n move disk 1 from_rod %c to_rod %c", from_rod, to_rod);
		return;
	}
	toh(n-1, from_rod, aux_rod, to_rod);
	printf ("\n move disk %d from rod %c to rod %c",n, from_rod, to_rod);
	toh(n-1, from_rod, aux_rod, to_rod);
}
 
 int main()
 {
       int n=3;
       toh(n, 'a', 'c', 'b');
       return 0;
 	
 }

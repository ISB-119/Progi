#include <stdio.h>
int main ()
{
	int s, i, m1, m2,m5, m10;
	m1 = 1;
	m2 = 2;
	m5 = 5;
	m10 = 10;
	printf("Enter desired amount: "); //Enter our amount
	scanf("%d", &s); //scan amount for 's'
	for (m1 = 0 ; m1 <= s ; m1++)
	for (m2 = 0 ; m2 <= s ; m2++)
	for (m5 = 0 ; m5 <= s ; m5++)
	for (m10 = 0 ; m10 <= s; m10++)
	if (1*m1 + 2*m2 + 5*m5 + 10*m10 == s) 
		i++;
	printf("Amount variants: %d\n", i -  4194432);
	return 0;
} 

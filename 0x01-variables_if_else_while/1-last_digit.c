#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ls = n % 10;
	if (ls > 5)
	{
		printf("Last digit of %d is %d and is and is greater than 5 \n", n, ls);
	}
	else if (ls == 0)
	{
		printf("Last digit of %d is %d and is zero \n", n, ls);
	}
	else if  (ls < 6 && ls != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, ls);
	}

	return (0);
}
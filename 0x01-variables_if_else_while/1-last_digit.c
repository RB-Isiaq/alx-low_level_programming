#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigning random number to variable n,
 * each time it is executed
 *Return: 0 as success
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is %d and is0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	return (0);
}

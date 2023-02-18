#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- entry point of our program
 *Description: a program to assign a random number to the value n
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int Ldn;
	char strn[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ldn = n % 10;

	if (Ldn > 5)
	{
		printf("%d and is greater than 5\n", strn, n, Ldn);
	}
	else if (Ldn == 0)
	{
		printf("%d and is 0\n", strn, n, Ldn);
	}
	else if (Ldn < 6)
		printf("%d and is less than 6 and not 0\n", strn, n, Ldn);

	return (0);
}

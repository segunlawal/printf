#include "main.h"
/**
 * main - for tests
 * Return: 0
 */
int main (void)
{
	int std_count = 0;
	int hmd_count = 0;

	printf("STANDARD PRINTF FROM C\n");
	std_count = printf("My first initial is: %c \n", 'S');
	printf("I printed %d characters\n", std_count);

	printf("__________________________________\n");

	printf("HOMEMADE PRINTF FROM C\n");
	hmd_count = printf("My first initial is: %c \n", 'S');
	printf("I printed %d characters\n", hmd_count);
	return (0);
}


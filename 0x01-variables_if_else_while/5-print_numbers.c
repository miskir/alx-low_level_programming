#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - writ a progeram that prints all single digit numbers
 * Reture: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 3; k++)
			{
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
	return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char mn;

	for (mn = 'a'; mn <= 'z'; mn++)
	{
		if (mn != 'e' && mn != 'q')
			putchar(mn);
	}
	putchar('\n');

	return (0);
}



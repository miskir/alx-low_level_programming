#include <stdio.h>
/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}

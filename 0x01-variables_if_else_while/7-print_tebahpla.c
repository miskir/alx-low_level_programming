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

	for (mn = 'z'; mn >= 'a'; mn--)
		putchar(mn);
	putchar('\n');
	return (0);
}

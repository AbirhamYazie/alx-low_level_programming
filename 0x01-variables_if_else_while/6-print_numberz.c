#include <stdio.h>

/**
 * a program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0;
 */
int main()
{
	int i=0;

	while (i<=9)
	{
		putchar(i%10 + '0');
		i++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase except 'q' and 'e'
 *
 * Return: 0 sucess
 */
int main(void)
{
	char d;
	for (d = 'a'; d <= 'z'; d++)
	{
		if (d != 'q' && d != 'e')
			putchar(d);
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char abrish[] = "_putchar";

	int c;

	for (c = 0; c < 7; c++)
	{
		_putchar(abrish[c]);
	}
	_putchar('\n');
	return (0);
}

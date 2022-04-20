#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: 0
 */

int main(void)
{
    int i = 0;
    
    while (i < 10)
    {
        putchar(i % 10 + '0');
        i++;
        if (i < 10)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}

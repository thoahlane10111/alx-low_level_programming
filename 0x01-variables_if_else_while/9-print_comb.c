#include <stdio.h>

/**
 * main - prints all possinle combinations of simgle-dihit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 8; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
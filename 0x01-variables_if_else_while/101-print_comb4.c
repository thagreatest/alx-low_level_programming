#include <stdio.h>

/**
 * main - Function begins
 * 
 * Return: Always (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; b < 10; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
					continue;

					putchar(',');
					putchar(' ');
			}
		}
	}

	putchar('\n');

	retutn (0);
}

#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main()
{
	for (int i = 0; i <= 9; i++)
		{
			for (int j = i + 1; j <= 9; j++)
				{
					for (int k = j + 1; k <= 9; k++)
						{
							putchar(i + '0');
							putchar(j + '0');
							putchar(k + '0);
							putchar(',');
							putchar(' ');	
						}
				}
		}
	putchar('\n');
	return 0;
}

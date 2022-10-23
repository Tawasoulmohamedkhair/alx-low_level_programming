#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 */

void print_times_table(int n)
{
	int num, mult, prot;

	if (!(n > 15 || n < 0))
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				prot = num * mult;
				if (mult != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (prot < 10 && mult != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prot % 10) + '0');
				}
				else if (prot >= 10 && prot < 100)
				{
					_putchar(' ');
					_putchar((prot / 10) + '0');
					_putchar((prot % 10) + '0');
				}
				else if (prot >= 100 && mult != 0)
				{
					_putchar((prot / 100) + '0');
					_putchar((prot / 10) % 10 + '0');
					_putchar((prot % 10) + '0');
				}
				else
					_putchar((prot % 10) + '0');																}
				_putchar('\n');
		}
	}
}

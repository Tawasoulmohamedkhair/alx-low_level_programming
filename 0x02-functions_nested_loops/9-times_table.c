#include "main.h"
/**
 * times_table - print the 9 times table
 **/
void times_table(void)
{
	int num, mult, prot;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 1; mult <= 9; mult++)
		{
			prot = num * mult;
			if (mult != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (prot >= 10)
			{
				_putchar((prot / 10) + '0');
				_putchar((prot % 10) + '0');
			}
			else if (prot < 10 && mult != 0)
			{
				_putchar(' ');
				_putchar((prot % 10) + '0');
			}
			else
				_putchar((prot % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * times_table - print the 9 times table
 **/
void times_table(void)
{
	int num, mult, prot;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(');
			prot = num * mult;
			if (prot <= 9)
				_putchar(' ');
			else
				_putchar((prot / 10) + '0');
			_putchar((prot % 10) + '0');
		}
		_putchar('\n');
	}
}

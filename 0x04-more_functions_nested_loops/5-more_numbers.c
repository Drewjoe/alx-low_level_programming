#include "main.h"

/**
 * more_numbers - print 10 times from 0 to 14
 *
 * Return:void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
<<<<<<< HEAD
        _putchar('0' + j / 10);
=======
				_putchar('0' + j / 10);
>>>>>>> bd7e3e1f558f9f5dd7d6f3fbecc6794e4fb8bceb
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

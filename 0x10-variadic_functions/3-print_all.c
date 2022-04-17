#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a character
 * @list: char to print
 * Return: void
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints an integer
 * @list: integer to print
 * Return: void
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: float to print
 * Return: void
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_str - prints a string
 * @list: string to print
 * Return: void
 */
void print_str(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list list;
	char *separator = "";

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(list);
				separator = ", ";
				break;
			}
			j++
		}
		i++
	}
	printf("\n");
	va_end(list);
}

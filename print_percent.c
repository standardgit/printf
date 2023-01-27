#include "main.h"

/**
 * printpercent - prints %
 * @format: format
 * @pa: va_list
 * Return: number of characters printed
 */
int print_percent(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}

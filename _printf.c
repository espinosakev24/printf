#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - function that prints
 * @format: format of the function
 * Return: amount of characters
 */
int _printf(const char *format, ...)
{
	va_list list;
	int n = 0;

	va_start(list, format);
	while (format[n] != '\0')
	{	/*if format = %*/
		if (format[n] == '%' && format[n + 1] == '%' && format[n + 2] == '%')
		{
			if (format[n + 3] != 'c' && format[n + 3] != 's' && format[n + 3] != '%')
			{
				write(1, &format[n], 1);
			}
			else
			{
				check_perc(format, &n, list);
			}
		}
		else if (format[n] == '%' &&
		(format[n + 1] != 'c' && format[n + 1] != 's' && format[n + 1] != '%') && format[n + 1] != '\0') 
		{
			write(1, &format[n], 1);
		}
		else if ((format[n] == '%'))
		{
			check_perc(format, &n, list);
			n++;
		}
	/*si format[n] no es % entonces imprimir*/
		else
		{	write(1, &format[n], 1);
		}
	n++;
	}
	return (n);
	va_end(list);
}

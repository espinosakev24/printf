#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list list;
	int n = 0;
	char *s;
	va_start(list, format);

	while (format[n] != '\0')
	{
	/*if format = %*/
		if ((format[n] == '%'))
		{
			check_perc(format[n], n);
		}

	/*si format[n] no es % entonces imprimir*/
		else
		{	write(1, format[n], 1);
		}
	n++;
}

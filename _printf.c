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
	int n = 0, i = 0;
	char *s;
	va_start(list, format);

	while (format[n] != '\0')
	{
		s = va_arg(list, format);

		if (format[n] == '%' && format[n + 1] != '\0')
		{
			if ((format[n + 1] == 'c' || format[n + 1] == 's'))
			{
				write(1, &s, strlen(s));
			}
		}
		if (format[n] == '%' && format[n + 1] != % && format[n + 1] != '\0')
		{
			
		}

		else
		{
		write(1, format[n], 1);
		}
	n++;
	}
}

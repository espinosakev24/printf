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
			if ((format[n + 1] == 'c')) /*Verificar que no imprima % ni c*/
			{
				if (s == 0)
				{	format_c_s();	
				}
				------------------------
			n++;
			}
			if ((format[n + 1] == 's')) /*Verificar que no imprima % ni s*/
			{
				if (s == 0)
				{	format_s_s();
				}
				-------------------------
			n++;
			}
	/*Evaluar si lo que hay despues de % es otro %*/
			if (format[n + 1] == '%')
			{	percx2();
			}
		}

	/*si format[n] no es % entonces imprimir*/
		else
		{	write(1, format[n], 1);
		}
	n++;
}

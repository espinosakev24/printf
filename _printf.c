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

	/*si formato = % y %c o %s */
		if ((format[n] == '%') && (format[n + 1] == 'c')) /*Verificar que no imprima ni el % ni la c*/
		{
			if(s == 0)
			{
				write(1, "", 1);   /*Verificar lo que imprime en este caso*/
                        	return(-1);	/*contar char en cada vuelta*/
			}
		----------------------------------------------------------------------------------
		n++;
		}

		if ((format[n] == '%' && format[n + 1] == 's')) /*Verificar que no imprima ni el % ni la s*/
		{
			if (s == 0)
			{
				write(1, "(null)", strlen(str);
                        	return(6);	/*contar char en cada vuelta*/
			}
		----------------------------------------------------------------------------------
		n++;
		}

	/*Evaluar si lo que hay despues de % es otro %*/
		if (format[n] == '%' && format[n + 1] == '%')
		{
			n++;
			write(1, format[n], 1);
		}

	/*si format[n] no es % entonces imprimir*/
		else
		{
		write(1, format[n], 1);
		}
	n++;
	}
}

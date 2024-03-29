#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * check_perc - If format == % this function checks
 * @format: format of the funciton
 * @n: iterator
 * @list: arguments
 * Return: 0
 */
int check_perc(const char *format, int *n, va_list list)
{
	char *str;
	const char *escrit;
	char s;

	escrit = format;
	if ((escrit[*n + 1] == 'c')) /*Verificar que no imprima % ni c*/
	{	s = va_arg(list, int);
		if (s == 0)
		{	format_c_s();
		}
		else
		{	write(1, &s, 1);
			n++;
		}
	}
	else if ((escrit[*n + 1] == 's')) /*Verificar que no imprima % ni s*/
	{
		str = va_arg(list, char *);
		if (str == 0)
		{	format_s_s();
		}
		else
		{	write(1, str, _strlen(str));
			n++;
		}
	}
	else if (escrit[*n + 1] == '%') /*despues de % es otro %*/
	{	percx2(format, n);
	}
	return (0);
}
/**
 * _strlen - check the code for Holberton School students.
 * @s: pointer to holberton
 * Return: Always n.
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
/**
* format_c_s - Verify if the function is c and null.
*
* Return: void.
*/
int format_c_s(void) /*si fn = c && s = null*/
{
	return (-1);
}
/**
* format_s_s - Verify if the function is s and null.
*
* Return: void.
*/
int format_s_s(void)/*si fn = s && s == null*/
{
	write(1, "(null)", 6);
	return (6);
}
/**
* percx2 - Verify when the function have two %.
* @format: Pointer to the string.
* @n: The iterator.
*
* Return: Integer.
*/
int percx2(const char *format, int *n)/*Si %% */
{
	write(1, format + *n, 1);
	return (1);
}

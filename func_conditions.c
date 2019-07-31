#include <stdio.h>
#include <stdarg.h>
/**
* check_perc - Function that verify the cases.
* @format: The string.
* @n: The iterator.
* @list: The list of arguments.
*
* Return: The value of integer.
*/
int check_perc(char *format, int *n, va_list list)
{
	char *str;
	char *escrit;
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
        /*Evaluar si lo que hay despues de % es otro %*/
	else if (escrit[*n + 1] == '%')
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
/**¬
* format_c_s - Verify if the function is c and null.¬
*
* Return: void.¬
*/¬
int format_c_s(void) /*si fn = c && s = null*/
{
	write(1, 0, 0);
	return (-1);
}
int format_s_s(void)/*si fn = s && s == null*/
{
	write(1, "(null)", 6);
	return (6);
}

int percx2(char *format, int *n)/*Si %% */
{
	(*n)++;
	write(1, format + *n, 1);
	return (1);
}

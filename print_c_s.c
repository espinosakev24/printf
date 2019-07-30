#include "holberton.h"
#include <stdarg.h>

/**
*
* printc - function to print chars.
* @c: Variable type list.
*
* Return: The value of integer.
*/
int printc(*str)
{
char car;

	car = (char)va_arg(*str, int);
	_putchar(car);
return (1);
}
/**
* prints - function to print strings.
* @s: Variable type list.
*
* Return: The value of integer.
*/
int prints(*str)
{
int sum;

	for (sum = 0; str[sum]; sum++)
	{
		_putchar(str[sum]);
	}
return (sum);
} 

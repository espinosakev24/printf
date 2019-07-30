#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/**
* imp - a function that print all.
* @c: Char c.
* @f: The function asociated.
*
* Description: Type of variable.
*/
typedef struct imp
{
	char *c;
	int (*f)(va_list);
} imp_t;
int _printf(const char *format, ...);

#endif


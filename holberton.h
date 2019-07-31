#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int check_perc(const char *format, int *n, va_list list);
int format_c_s(void);
int format_s_s(void);
int percx2(const char *format, int *n);
int _strlen(char *s);
#endif

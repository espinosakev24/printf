#include <stdio.h>
/**
 *
 *
 */
int format_c_s(char *format, int *n, char *s) /*si fn = c && s = null*/
{
	write(1, "", 1);
	return (-1);
}
int format_s_s(char *format, int *n, char *s)/*si fn = s && s == null*/
{
	write(1, "(null)", 6);
	return (6);
}

int percx2(char *format, int *n)/*Si %% */
{
	*n = *n + 1;
	write(1, format[*n], 1);
	return (1);
}
int percx3(char *format, int *n)/*si %%% */
{
	*n = *n + 2;
	write(1, format[*n], 1);
	return (-1);
}

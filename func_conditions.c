#include <stdio.h>
/**
 *
 *
 */
int check_perc(char *format, int *n)
{
	if ((format[n + 1] == 'c')) /*Verificar que no imprima % ni c*/
	{
		if (s == 0)
		{
			format_c_s();
		}
                                ------------------------
		n++;
		}
		if ((format[n + 1] == 's')) /*Verificar que no imprima % ni s*/
		{
			if (s == 0)
			{
				format_s_s();
			}
                                -------------------------
			n++;
		}
        /*Evaluar si lo que hay despues de % es otro %*/
			if (format[n + 1] == '%')
			{
				percx2();
			}
}
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

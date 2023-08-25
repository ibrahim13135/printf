#include "main.h"
#include <stddef.h>
/*
 * print_from_to - prints a range of char addresses
 * @start: starting address
 * @stop: stopping address
 * @except: except address
 *
 * Return: number bytes print
*/
int print_form_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
		if (start != except)
			sum += _putchar (*start);
		start++;

	return (sum);
}

/*
* print_rev - prints string in reverse
* @ap: string
* @params: the parameters struct
*
* Return: number bytes printed
*/
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str);

	return (sum);
}

/*
* print_rot13 - prints string in rot13
* @ap: string
* @params: the parameters struct
*
* Return: number bytes printed
*/
int print_rot13(va_list ap, params_t *params)
{
	int k, index;
	int count = 0;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM       nopqrstuvwxyzabcdefgijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	k = 0;
	index = 0;
	while (a[k])
		if ((a[k] >= 'A' && a[k] <= 'Z') || (a[k] >= 'a' && a[k] <= 'z'))
			index = a[k] - 65;
			count += _putchar(arr[index]);

		else
			count += _putchar(a[k]);
		k++;

	return (count);
}
























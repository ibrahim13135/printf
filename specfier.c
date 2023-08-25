#include "main.h"

/*
 * get_specfier - findes the format function
 *@s: the format string
 *
 * Return: the number of bytes print
 */
int (*get_specfier(char *s)(va_list ap, params_t *params)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_string},
		{"%", print_percent},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_address},
		{"S", print_address},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL,NULL}
	};
	int g = 0;
	while (specifiers[g].specfier)
	{
		if (*s == specifiers[g].specfier[0])
		{
			return (specifiers[g].f);
		}
		i++;
	}
	return (NULL);
}

/*
 * get_print_func - findes the format function
 * @s: the format string
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: the number of bytes print
*/
int get_print_func(char *s, va_list ap, params_t *params)
{
	int (*o)(va_list, params_t *) = get_specifier (s);

	if (f)
		return (f(ap, params));
	return (0);



}
 
/*
 * get_flag - findes the flag function
 * @s: the format string
 * @params: the parameters struct
 *
 * Return: if flag was valid
*/
int get_flag(char *s, params_t *params)
{
	int i = 0;

	switch (*s)
	{
		case '+':
		     i = params->plus_flag = 1;
		     break;
		case ' ':
                     i = params->space_flag = 1;
                     break;
		case '#':
                     i = params->hashtag_flag = 1;
                     break;
		case '-':
                     i = params->minus_flag = 1;
                     break;
		case '0'
                     i = params->zero_flag = 1;
                     break;
	}
	return (i)
/*
 * get_modifier - findes the modifier function
 * @s: the format string
 * @params: the parameters struct
 *
 * Return: if modifier was valid
 */
int get_modifier(char *s, prams_t *params)
{
	int a = 0;

	switch (*s)
	{
	case 'h':
	   a = params->plus_flag = 1;
	    break;
	case 'l'
	    a = params->l_modifier = 1;
	    break;
	}
	return (a)
}

/*
 * get_width - gets the width from the format string
 * @s: the format string
 * @params: the parameter struct
 *@ap: the argument pointer
 *
 * Return: new pointer
*/
char *get_width(char *s, params_t *params, va_list ap)
{
	int v = 0;

	if (*s == '*')
	{
		d = va_arg(ap, int);
		s++;
	}
	else
	{
		while (_isdigit(*s))
		     d = d * 10 + (*s++ - '0');
	}
	params->width = d;
	return (0);
}

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct format - chooses which conv spec
 * @f: First member
 * @n: Second member
 *
 */

typedef struct format
{
	char *n;
	int (*f)();
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenc(const char *s);
int pf_char(va_list args);
int pf_string(va_list args);
int pf_perc(void);
int pf_int(va_list args);
int pf_dec(va_list args);
int print_number(int n);
#endif

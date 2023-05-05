#ifndef variadic
#define variadic

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - struct
 * @type: c
 * @f: function
 */

typedef struct print
{
	char *type;
	int (*f)(va_list ex4);
} print_t;


void characters(va_list ex4);
void floats(va_list ex4);
void strings(va_list ex4);
void numbers(va_list ex4);

#endif

#ifndef calc
#define calc

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 **/

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

 typedef struct op
{
	    char *op;
	        int (*f)(int a, int b);
} op_t;

#endif

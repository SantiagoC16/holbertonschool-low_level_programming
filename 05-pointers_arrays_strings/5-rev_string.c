#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: is a string
 * return : always a.
 */

void rev_string(char *s)
{
    int a;
    int b;

    int l = strlen(s);
    int m = l / 2;
    for (a = 0; a < m; a++)
    {
        b = s[a];
        s[a] = s[l - a - 1];
        s[l - a - 1] = b;
    }
}

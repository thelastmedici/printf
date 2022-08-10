#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
        int n = _printf("Hello %c %s %%", 'A', "Joseph");
        printf("\nn = %d \n", n);

return (0);
}

#include "main.h"
/**
 *  get_endianness -  Flip
 * Return: integer
 */
int get_endianness(void)
{
int cnn = 1;
char *anas = (char *)&cnn;

if (*anas == 1)
return (1);
return (0);
}

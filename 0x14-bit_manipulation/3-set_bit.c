#include "main.h"
/**
* set_bit - setting a bit at a given index to 1
*
* @n: n it is pointer for a number to be changed
* @index: the bit to set to 1
*
* Return: 1 for success, -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
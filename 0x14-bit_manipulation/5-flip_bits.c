#include "main.h"
/**
* flip_bits -  returns the num of bits or counts the num of bits
* to get from one num to another
*
* @n: 1st num
*
* @m: 2nd num
*
* Return: num of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (j = 63; j > 1; j--)
{
current = exclusive >> j;
if (current & 1)
count++;
}
return (count);
}

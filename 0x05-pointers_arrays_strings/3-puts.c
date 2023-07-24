#include "main.h"
/**
 * _put - Prints a string
* @str: The string to print
* Return: void
*/
void put(char str)
{
for (; str != '\0'; str++)
{
put(str);
}
put('\n');
}

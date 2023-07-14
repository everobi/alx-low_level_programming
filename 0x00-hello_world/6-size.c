#include<stdio.h>
/**
 * main - Aprogram that printsthe size of various computer types
 * Return 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu  byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a char: %lu  byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a char: %lu  byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a char: %lu  byte(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu  byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

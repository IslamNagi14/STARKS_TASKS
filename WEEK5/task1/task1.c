#include<stdio.h>
void main(void)
{
char x ,*ptr;
x = 'A';
ptr = &x;
while( x >= 'A' && x <= 'Z')
{
	printf("%c	",*ptr);
	(*ptr)++;
}



}
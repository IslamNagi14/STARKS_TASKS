#include<stdio.h>
#include<string.h>
void main (void)
{
	char str[100];
	printf("enter any string : ");
	gets(str);
	for(int i = 0;i < strlen(str);i++)
	{
		if(str[i] == ' ')
		str[i] = '*';
	}
	printf("after replacing the space with * --> %s",str);
}
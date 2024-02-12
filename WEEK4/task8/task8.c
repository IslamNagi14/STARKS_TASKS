#include<stdio.h>
#include<string.h>
void main (void)
{
	char str[200]; char ch;int count = 0;
	printf("enter any string : ");
	gets(str);
	printf("select any character to find its frequancy : ");
	scanf("%c",&ch);
	for(int i = 0;i <strlen(str);i++)
	{
		if(str[i] == ch)
			count++;
	}
	printf("the fequency of '%c' is %d",ch,count);
}
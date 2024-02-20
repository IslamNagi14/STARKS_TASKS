#include<stdio.h>
#include<string.h>
void main (void)
{

char str[365478];

char *ptr = str;
printf("enter any string : ");
gets(ptr);
int v_num = 0,con_num = 0;
for(int i = 0 ; i < strlen(ptr);i++)
{
	switch(ptr[i])
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		v_num++;
		break;
		case ' ': 
		break;
		default: 
		con_num++;
	}
	
}
	printf("number of vowels = %d\t",v_num);
	printf("number of consonants = %d",con_num);




}
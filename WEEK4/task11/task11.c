#include<stdio.h>
int Get_length(char []);
void main (void)
{
	char str1[100],str2[100];int x = 0;
	printf("enter the 1st string : ");
	gets(str1);
	printf("enter the 2nd string : ");
	gets(str2);
	int len1 = Get_length(str1);
	int len2 = Get_length(str2);
	char con_str[len1+len2];
	for(int i = len1+1;i < (len1 + len2+1);i++)
	{
		con_str[len1] = ' ' ;
		con_str[x]=str1[x];
		con_str[i] = str2[x];
		x++;
	}
	printf("%s",con_str);
}
int Get_length(char arr[])
{
	int i = 0;
	while(arr[i] != 0)
	{
		i++;
	}
	return i;
}

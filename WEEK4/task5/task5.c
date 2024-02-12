#include<stdio.h>
#include<string.h>
void main (void)
{
	char num[32767];int x = 1;
	printf("enter any number : ");
	scanf("%s",&num);
	int n = strlen(num);
	for(int i =0 ; i < n;i++)
	{
		if(num[i] != num[n-i-1])
		{
			x = 0;
		}
	}
	if(x)
	{
		printf("%s is palindrome number",num);
	}
	else
	{
		printf("%s is NOT palindrome number",num);
	}
	
}
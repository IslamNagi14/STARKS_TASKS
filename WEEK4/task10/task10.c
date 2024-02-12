#include<stdio.h>
#include<string.h>
void main (void)
{
	char str1[100],str2[100];int x = 0;
	printf("enter the 1st string : ");
	gets(str1);
	printf("enter the 2nd string : ");
	gets(str2);
	
	int L_str1 = strlen(str1);
	int L_str2 = strlen(str2);
	if(L_str1 >= L_str2)
	{
		for(int i = 0; i < L_str1;i++)
		{
			if(str1[i] != str2[i])
			{
				x =1;
				break;
			}
		}
	}	
    else	
	{
	    for(int i = 0; i < L_str2 ;i++)
		{
			if(str1[i] != str2[i])
			{
				x =1;
				break;
		}	}
	}
	if(x)
	{
		printf("strings are NOT equal.");
	}
	else{printf("strings are  equal.");}
}
#include<stdio.h>
#include<string.h>
int F_occu(char*,char*);
int (*ptr)(char*,char*);
void main (void)
{
	ptr = F_occu;
	char str1[200] , str2[200];
	printf("enter source string : ");
	gets(str1);
	printf("enter search string : ");
	gets(str2);
	
	int ind_num = ptr(str1,str2);
	if(ind_num >= 0)
				printf("Frist occurance of %s at index : %d",str2,ind_num);
		else
			printf("the occurrence of the second string dose not exist in the first string");

}
int F_occu(char *p_str1,char *p_str2)
{
		int x = -1,i;
	for(i = 0;i<strlen(p_str1);i++)
	{
		for(int j = 0;j<strlen(p_str2);j++)
		{
			
			if(p_str1[i+j] == p_str2[j])
			{
				if (j == strlen(p_str2)-1)
			    {
				   x = i;
			       break;
			    }
			}
			else
			{
			    break;	
			}
		}
		if(x==i)
			break;
				
	}
	if(x == i)
		return i ;
		else
		return -1;


	
}


	
}

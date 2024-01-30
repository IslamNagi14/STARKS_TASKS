#include<stdio.h>
void isperfect(void)
{
	int i,n;
	for(n=1;n<=100;n++)
	{
		int chk_num=0;
		for(i=1;i<n;i++)
		{
			if((n%i)==0)
			{
				chk_num+=i;
			}
		}
		if(chk_num==n)
		{
			printf("%d is perfect number\n",n);
		}
	}
}

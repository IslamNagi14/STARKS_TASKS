#include<stdio.h>
void tobinary(int D_num)
{
    int count;
	int B_num[32] ;
	for(count = 31;count >= 0;count--)
	{
		if(D_num%2 == 0)
		{
			B_num[count] = 0;
		}
		else{B_num[count] = 1;}
		D_num/=2;
	}
	for(count =0;count<32;count++)
	{
		printf("%d",B_num[count]);
	}
	
	
}
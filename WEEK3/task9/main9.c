//#include<stdio.h>
#include"main.h"
#include"lab1.h"
void main(void)
{
	int  i;
	for(i =0;i<5;i++)
	{
		printf("the call number %d\n",i+1);
	float num1, num2;
	printf("enter the 1st number : ");
    scanf("%f",&num1);	
	printf("enter the 2nd number : ");
    scanf("%f",&num2);	
	calc_avg(num1,num2);
	}
	printf("number of occurrences of those calls is %d",i);
}
 
//#include<stdio.h>
#include"main.h"
#include"lab1.h"
void main(void)
{
	char a;static int x =0;
	for(;;)
	{
	printf("do you want to calculate the average?\nenter (Y,y) for Yes or (N,n) for No : ");
	scanf("%s",&a);
	if( a == 'Y' || a == 'y')
	{		
          x++;
          printf("the call number %d\n",x);
	      float num1, num2;
	      printf("enter the 1st number : ");
          scanf("%f",&num1);	
	      printf("enter the 2nd number : ");
          scanf("%f",&num2);	
	      calc_avg(num1,num2);
	}
	else{break;}
	}
	printf("number of occurrences of those calls is %d",x);
}
 

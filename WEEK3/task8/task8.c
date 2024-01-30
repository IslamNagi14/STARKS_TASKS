#include<stdio.h>
double smallest(double,double,double);
void main(void)
{
	int num1,num2,num3;
	printf("enter the 1st number : ");
	scanf("%d",&num1);
	printf("enter the 2nd number : ");
	scanf("%d",&num2);
	printf("enter the 3rd number : ");
	scanf("%d",&num3);
	int min = smallest(num1,num2,num3);
	printf("the smallest number is %d",min);
}

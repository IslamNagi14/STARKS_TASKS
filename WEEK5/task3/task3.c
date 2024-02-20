#include<stdio.h>
void arth();
int num1 , num2;
void main(void)
{
 int sum ,difference , product;
 printf("enter the number 1 : "); 
 scanf("%d",&num1);
 printf("enter the number 2 : "); 
 scanf("%d",&num2);
 arth(&sum , &difference , &product);
 printf("sum = %d,	difference = %d,	product = %d",sum , difference , product);



}
void arth(int *p_sum , int *p_dif , int *p_pro )
{
	*p_sum = num1 + num2;
	*p_dif = num1 - num2;
	*p_pro = num1 * num2;
	
	
	
	
}
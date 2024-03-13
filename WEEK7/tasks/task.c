#include "file.h"
#include "file.h"
#include "file.h"
#include "file.h"
						   
void main()
{
	float num1,num2,res;char op;
	int arr[5]={1,2,3,4,5};
	printf("enter the frist number : ");
	scanf("%f",&num1);
	printf("enter the second number : ");
	scanf("%f",&num2);
	printf("enter the operation that U want : ");fflush(stdin);fflush(stdout);
	scanf("%c",&op);
	switch(op)
	{
		case '+' :
		res = SUM_CALCULATOR(num1,num2);
		break;
		case '-' :
		res = SUB_CALCULATOR(num1,num2);
		break;
		case '*' :
		res = MUL_CALCULATOR(num1,num2);
		break;
		case '/' :
		res = DIV_CALCULATOR(num1,num2);
		break;
	}
	printf("the result is %.3f\n",res);
 
    int sum = SUM_ELE(arr,5);
	printf("the summation of array elements is %d",sum);
}	
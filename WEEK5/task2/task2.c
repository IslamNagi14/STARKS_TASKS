#include<stdio.h>
int fact(int*);
void main(void)
{
	int num;
	
	printf("enter any positive integer number : ");
	scanf("%d",&num);
	printf("the factorial of %d is %d",num,fact(&num));
	
	
}
int fact(int *ptr)
{ 
    int n = *ptr-1;
	if(*ptr <= 1)
		return 1;
	else 
		return *ptr * fact(&n);
	
	
}
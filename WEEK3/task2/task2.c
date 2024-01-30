#include<stdio.h>
unsigned long long fibonacci(unsigned int);
void main(void)
{
	unsigned int n;
	printf("enter the order[1,46] that you want : ");
	scanf("%u",& n);
	unsigned long long num = fibonacci(n);
	printf("the %uth number is %u\n",n,num);
	printf("the largest fibonacci number in my system is %u",fibonacci(46));
}

#include<stdio.h>
int rev_num(int);
void main(void)
{
	int act_num;
	printf("enter the actual number : ");
	scanf("%d",&act_num);
	int Reversed_num = rev_num(act_num);
	printf("the actual number is %d and the reversed is %d",act_num,Reversed_num);
}

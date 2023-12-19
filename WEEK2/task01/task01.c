#include <stdio.h>
#include <stdlib.h>
void main()
{
int num1 ,num2;
for(;;)
{
printf("enter the frist number : ");
scanf("%d",&num1);
printf("enter the second number : ");
scanf("%d",&num2);
printf("%d + %d = %d\n",num1,num2,num1+num2);
}
}
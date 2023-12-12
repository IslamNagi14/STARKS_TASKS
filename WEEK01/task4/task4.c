#include <stdio.h>
#include <stdlib.h>

int main()
{float num1 ,num2 ;
    printf("enter the first number ");
    scanf("%f",&num1);
    printf("enter the second number ");
    scanf("%f",&num2);
    printf("the result of addition is %.3f + %.3f = %.3f \n", num1 , num2 , num1+ num2);
    printf("the result of subtraction is %.3f - %.3f = %.3f\n", num1 , num2 , num1 - num2);
    printf("the result of multiplication is %.3f * %.3f = %.3f\n", num1 , num2, num1 * num2);
    printf("the result of addition is %.3f / %.3f = %.3f\n", num1 , num2 , num1 / num2);
    return 0;
}

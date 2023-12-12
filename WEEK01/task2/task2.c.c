#include <stdio.h>
#include <stdlib.h>

int main()
{float num1,num2,swap;
    printf("Enter the first float number ");
    scanf("%f",&num1);
    printf("Enter the second float number ");
    scanf("%f",&num2);
    printf("the first number before swapping equal %.3f \n",num1);
    printf("the second number before swapping equal %.3f \n",num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
     printf("the first number after swapping equal %.3f \n",num1);
    printf("the second number after swapping equal %.3f \n",num2);
    return 0;
}

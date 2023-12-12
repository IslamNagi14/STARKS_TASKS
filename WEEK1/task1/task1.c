#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_num;
    float float_num;
    char char_elemnt,a;
    printf("Enter the character : ");
    scanf("%c",&char_elemnt);
	fflush(stdin);
    printf("Enter the integer number : ");
    scanf("%d",&int_num);
	fflush(stdin);
    printf("Enter the float number : ");
    scanf("%f",&float_num);
	fflush(stdin);
    printf("\n the integer number is %d\n the float number is %.2f\n the character is %c",int_num,float_num,char_elemnt);
	
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char elemnt,elemnt_after,elemnt_before;
    printf("enter your character ");

    scanf("%c",& elemnt);
    printf("your character is %c\n",elemnt);
    printf("the ascii code of your character is %d\n",elemnt);
    printf("the character before your character is %c\n",--elemnt);
    ++elemnt;
    printf("the character after your character is %c\n",++elemnt);
    return 0;
}

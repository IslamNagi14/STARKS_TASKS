#include <stdio.h>
#include <stdlib.h>

int main()
{
    char elemnt,elemnt_after,elemnt_before;
    printf("enter your character ");
    scanf("%c",& elemnt);
    printf("your character is %c\n",elemnt);
    printf("the ascii code of your character is %d\n",elemnt);
	elemnt_before = elemnt-1;
    printf("the character before your character is %c\n",elemnt_before);
    elemnt_after = elemnt+1;
    printf("the character after your character is %c\n",elemnt_after);
    return 0;
}

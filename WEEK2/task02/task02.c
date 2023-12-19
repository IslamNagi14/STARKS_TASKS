#include <stdio.h>
#include <stdlib.h>
void main()
{
int id = 150;
int psword =12345678;
int ID,PSWORD;
printf("enter your ID : ");
scanf("%d",& ID);
if(id == ID)
{
for(int i =0;i<3;i++)
{
printf("enter your correct password : ");
scanf("%d",& PSWORD);
if(psword == PSWORD)
{
printf("welcom sir");
break;
}
else
{
printf("wrong password \n");
if(i ==2)
{
printf("no more tries");
}
}
}
}
else
{
printf("You are not registered");
}

}

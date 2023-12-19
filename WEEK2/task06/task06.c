#include <stdio.h>
#include <stdlib.h>
void main()
{
int lim_w8,bob_w8,years_num;
years_num = 0 ;
printf("Don't forget ( 1 <= Limak weight <= Bob weight < 10)\n"); 
printf("enter the weight of Limak : ");
scanf("%d",&lim_w8);
printf("enter the weight of Bob : ");
scanf("%d",&bob_w8);
while(lim_w8 <= bob_w8)
{
	years_num++;
	lim_w8 *= 3 ;
	bob_w8 *=2 ;
}
printf(" Limak will become strictly larger (strictly heavier) than Bob after %d years" ,years_num); 
}
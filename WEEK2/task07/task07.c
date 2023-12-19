#include <stdio.h>
#include <stdlib.h>
void main()
{
int num1,num2,sum;
printf("enter only +ve numbers\n");

for(;;)
{
	sum = 0;
	printf("enter the frist number : ");
scanf("%d",&num1);
printf("enter the second number : "); 
scanf("%d",&num2);
  if ( (num1 > 0) && (num2 > 0)) 
  {
	for (int i = num1; i <= num2;i++)
	{
		
		printf("%d ",i);
		sum += i;
	}
	printf("sum = %d\n",sum);
  }	
  else
  { break;}
 
}

}
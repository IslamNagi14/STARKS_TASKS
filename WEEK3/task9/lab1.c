#include"main.h"
#include"lab1.h"

 void calc_avg(float num1,float num2)
{
	static float avg = 0;
	
	printf("the value before calculating the average : %.2f\n",avg);
	  avg = (num1+num2)/2;
	printf("the value after calculating the average : %.2f\n",avg);
	
	
}

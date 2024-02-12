#include<stdio.h>
void main(void)
{
	float class1[10] , class2[10] , class3[10];
	float NOPS , NOFS , HG , LG;
	float AvGG = 0;
	NOFS = NOPS = HG = 0;
	LG =100;
	printf("\t\t\t\t\tclass 1\n");
	for(int i = 0; i < 10;i++)
	{
		printf("enter the grade of the %dth student in class1 : ",i+1);
		scanf("%f",&class1[i]);
		AvGG += class1[i];
		if( class1[i] >= 50 )
			NOPS++;
		else{NOFS++;}
		if( HG < class1[i] )
			HG = class1[i];
		if( LG > class1[i] )
		{LG = class1[i];}
	}
	printf("\t\t\t\t\tclass 2\n");
	for(int i = 0; i < 10;i++)
	{
		printf("enter the grade of the %dth student in class2 : ",i+1);
		scanf("%f",&class2[i]);
		AvGG+=class2[i];
		if(class2[i] >= 50)
			NOPS++;
		else{NOFS++;}
		if(HG < class2[i])
			HG = class2[i];
		if(LG > class2[i])
			{LG = class2[i];}
	}
	printf("\t\t\t\t\tclass 3\n");
	for(int i = 0; i < 10;i++)
	{
		printf("enter the grade of the %dth student in class3 : ",i+1);
		scanf("%f",&class3[i]);
		AvGG+=class3[i];
		if(class3[i] >= 50)
			NOPS++;
		else{NOFS++;}
		if(HG < class3[i])
		HG = class3[i];
	    if(LG > class3[i])
		{LG = class3[i];}
	}
	AvGG/=30;
	printf("Number of passed student is %.0f\n",NOPS);
	printf("Number of failed student is %.0f\n",NOFS);
	printf("the Lowest grade is %.3f\n",LG);
	printf("the Highest grade is %.3f\n",HG);
	printf("the Average grade is %.3f\n",AvGG);
	

	
}
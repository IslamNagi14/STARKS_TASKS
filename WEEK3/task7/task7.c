#include<stdio.h>
int QualityPoints(int);
void main(void)
{
	int avg;
	printf("enter your average degree : ");
	scanf("%d",&avg);
	int n = QualityPoints(avg);
	printf("%d",n);
	
}

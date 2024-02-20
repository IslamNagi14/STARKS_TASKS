#include<stdio.h>
double cube();
void main(void)
{
	int x;char y; int long z;float j;double k;int type;
	printf("enter the type : ");
	scanf("%d",&type);
	printf("enter any number : ");
	switch(type)
	{
		
		case 1: //char
		        scanf("%d",&y);
		        printf("the cube of %d is %.0lf",y,cube(&y,type));
		        break;
		case 2: //int
		        scanf("%d",&x);
		        printf("the cube of %d is %.0lf",x,cube(&x,type));
		        break;
		case 3: //long int
		        scanf("%ld",&z);
	            printf("the cube of %ld is %.0lf",z,cube(&z,type));
				break;
		case 4://float
		        scanf("%f",&j);
		        printf("the cube of %.4f is %.3lf",j,cube(&j,type));
		        break;
		case 5://double
		        scanf("%lf",&k);
		        printf("the cube of %.4lf is %.3lf",k,cube(&k,type));
		        break;
	
	}
	
	
	
}
double cube(void *ptr,int type)
{
	switch(type)
	{
		
		case 1: //char
		return (double)(*(char*)ptr * *(char*)ptr * *(char*)ptr);
	
	
		case 2: //int
		return (double)(*(int*)ptr * *(int*)ptr * *(int*)ptr);
		
		
		case 3: //long int
		return (double)((*(long int*)ptr) * (*(long int*)ptr) * (*(long int*)ptr));
		
		
		case 4://float
		return (double)(*(float*)ptr * *(float*)ptr * *(float*)ptr);
		
		
		
		case 5://double
		return *(double*)ptr * *(double*)ptr * *(double*)ptr;
	}
	
}
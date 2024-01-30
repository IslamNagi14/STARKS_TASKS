#include<stdio.h>
void isprime(int n)
{
	int con = 1;
	for(int i =2;i<n;i++)
	{
		if((n%i)==0)
		{
			con = 0;
			break;
		}
		else
		{
			con = 1;
		}
	}
	if (con)
	{
		printf("%d is prime number ",n);
	}
	else
	{printf("%d is not prime number ",n);}
}
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int N , A , B;
	int i,sum = 0;
	printf("enter your range ");
	scanf("%d",& N);
	printf("enter the minimum of digit summation ");
	scanf("%d",& A);
	printf("enter the maximum of digit summation ");
	scanf("%d",& B);
	for ( i = 1; i <= N;i++)
	{
		int rem =0;
		int j; j=i;
		for(;;)
		{
		 rem = rem + (j % 10);
		
		 j/=10;
		 if(j==0)
			 break;
		}
		
		if ((rem >= A) && (rem <=B))
		{
			 printf("%d\n",i);
			sum += i;
		}
	}
	
	printf("%d",sum);
	
	
}

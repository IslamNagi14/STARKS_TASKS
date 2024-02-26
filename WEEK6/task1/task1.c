#include<stdio.h>
typedef long int ld32;
typedef struct
{
	ld32 salary;
	ld32 bonus;
	ld32 deductions;
	
}Employee;
Employee Ahmed , Waleed , Amr;
void main(void)
{
printf("enter the salary of Ahmed : ");
scanf("%ld",&Ahmed.salary);
printf("enter the bonus of Ahmed : ");
scanf("%ld",&Ahmed.bonus);
printf("enter the deductions of Ahmed : ");
scanf("%ld",&Ahmed.deductions);
printf("enter the salary of Waleed : ");
scanf("%ld",&Waleed.salary);
printf("enter the bonus of Waleed : ");
scanf("%ld",&Waleed.bonus);
printf("enter the deductions of Waleed : ");
scanf("%ld",&Waleed.deductions);
printf("enter the salary of Amr : ");
scanf("%ld",&Amr.salary);
printf("enter the bonus of Amr : ");
scanf("%ld",&Amr.bonus);
printf("enter the deductions of Amr : ");
scanf("%ld",&Amr.deductions);
ld32 T_value = Ahmed.salary + Ahmed.bonus - Ahmed.deductions + Waleed.salary + Waleed.bonus - Waleed.deductions
+ Amr.salary + Amr.bonus - Amr.deductions;
printf("The total value shall be supplied : %ld",T_value);


}
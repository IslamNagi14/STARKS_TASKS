#include "file1.h"
#include<stdio.h>
//لسه فاضل ال admin
// admin's data
const int A_id = 12300 ;
const int A_pas = 12321; 
int s_card = 15;

void main(void)
{
	
	char mode;char gos ='a';
	printf("for the first use of machine admin must do some updates \n");
	admin_login(A_id,A_pas,&a_molto,&a_biscuits,&a_tea,&a_coffee, & a_cola ,&a_miranda,& a_mint , & a_strawberry,
		 &molto,& biscuits, &tea,&coffee, & cola,& miranda,& mint , & strawberry);
	//machitim(a_molto,a_biscuits,a_tea,a_coffee,  a_cola ,a_miranda, a_mint ,  a_strawberry,
		// molto, biscuits, tea,coffee,  cola, miranda, mint ,  strawberry);

//	admin_editing(&a_molto,&a_biscuits,&a_tea,&a_coffee, & a_cola ,&a_miranda,& a_mint , & a_strawberry,
		// &molto,& biscuits, &tea,&coffee, & cola,& miranda,& mint , & strawberry);
		for(;;)
		{
	mode = S_mode();
	getchar();
	
	if(mode == 'b')
	{
		fflush(stdin);fflush(stdout);
		printf("are you a)guest or b)subscriber ?\n"); fflush(stdin);fflush(stdout);
		scanf("%c",&gos);fflush(stdin);fflush(stdout);
		//fflush(stdin);fflush(stdout);
		switch(gos)
		{
			case 'a':
			list(molto, biscuits,tea, coffee, cola, miranda, mint , strawberry);
			printf("total price : %d",select_break(&a_molto,&a_biscuits,&a_tea,&a_coffee, & a_cola ,&a_miranda,& a_mint , & a_strawberry,molto, biscuits,tea, coffee, cola, miranda, mint , strawberry));
			printf("\nyou have only one payment option\n") ;fflush(stdin);fflush(stdout);
			printf("ok,have a good meal\n");fflush(stdin);fflush(stdout);
			break;
			
			
			case'b':
			
			if(s_log())
			{
				char way;
				list(molto, biscuits,tea, coffee, cola, miranda, mint , strawberry);
				int tp = select_break(&a_molto,&a_biscuits,&a_tea,&a_coffee, & a_cola ,&a_miranda,& a_mint , & a_strawberry,molto, biscuits,tea, coffee, cola, miranda, mint , strawberry);
				printf("total price : %d\n",tp);fflush(stdin);fflush(stdout);
			    printf("you have two options to payment a)cash\tb)subscriber card\n") ;	fflush(stdin);fflush(stdout);
				fflush(stdin);fflush(stdout);
				scanf("%c",&way);
				fflush(stdin);fflush(stdout);
				switch(way)
				{
					case 'a':
					fflush(stdin);fflush(stdout);
					printf("ok,have a good meal\n");
					break;
					case 'b':
					check_scard(&s_card,tp);
					fflush(stdin);fflush(stdout);
					printf("have a good meal");
					break;
					
				}
				
                				
			}
			
			break;
			
			
			
		}
		
		
    }
	else if(mode == 'a')
	{
		admin_login(A_id,A_pas,&a_molto,&a_biscuits,&a_tea,&a_coffee, & a_cola ,&a_miranda,& a_mint , & a_strawberry,
		 &molto,& biscuits, &tea,&coffee, & cola,& miranda,& mint , & strawberry);
	}

	
	}
	fflush(stdin);fflush(stdout);
	
	
}

	

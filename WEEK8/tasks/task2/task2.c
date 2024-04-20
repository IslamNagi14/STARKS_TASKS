#include "file1.h"
void main()
{
	int n,x,id,ch;char name[88];
	do
	{
		printf("\t\t\t\t\t\t WELCOME\n");fflush(stdin);fflush(stdout);
		printf("1- add new family\n2-list all families\n3-view one family with its id\n");fflush(stdin);fflush(stdout);
		printf("4-add new member for specific family\n5-delete any member for specific family\n");fflush(stdin);fflush(stdout);
		printf("6-edit member for specific family\n7-delete any selected family\n");fflush(stdin);fflush(stdout);
		printf("your choice : ");fflush(stdin);fflush(stdout);
		scanf("%d",&n);fflush(stdin);fflush(stdout);
		
		switch(n)
		{
			case 1:
			printf("\t\t\t\t add new family\n");
			printf("enter the number of members : ");fflush(stdin);fflush(stdout);
			scanf("%d",&x);fflush(stdin);fflush(stdout);
			E_family(x);
			printf("\n");
			break;
		
			case 2:
			printf("\t\t\t\tlist all families\n");
			all_clints();
			printf("\n");
			break;
			
			case 3:
			printf("\t\t\t\tview one family with its id\n");
			printf("enter the ID : ");
			fflush(stdin);fflush(stdout);
			scanf("%d",&id);
			VWID_clints(id);
			printf("\n");
			break;
			
			case 4:
			printf("\t\t\t\tadd new member for specific family\n");
			printf("enter the ID : ");
			fflush(stdin);fflush(stdout);
			scanf("%d",&id);
			ANM_family(id);
			printf("\n");
			break;
			
			case 5:
			printf("\t\t\t\tdelete any member for specific family\n");
			printf("enter the ID : ");
			fflush(stdin);fflush(stdout);
			scanf("%d",&id);
			printf("enter the name of member that U want to delete : ");
			fflush(stdin);fflush(stdout);
			scanf("%s",&name);	
			DAM_family(id,name);
			printf("\n");
			break;
			
			case 6:
			printf("\t\t\t\tedit member for specific family\n");
			printf("enter the ID : ");
			fflush(stdin);fflush(stdout);
			scanf("%d",&id);
			printf("enter the name of member that U want to edit : ");
			fflush(stdin);fflush(stdout);
			scanf("%s",&name);
			EDM_family(id,name);
			printf("\n");
			break;
			case 7:
			printf("\t\t\t\tdelete any selected family\n");
			printf("enter the ID : ");
			fflush(stdin);fflush(stdout);
			scanf("%d",&id);
			D_family(id);    
            printf("\n");			
			break;
		}
		printf("do you want to run again yes(1)...No(0) : ");
		scanf("%d",&ch);
		printf("\n");
	}while(ch);
	
}
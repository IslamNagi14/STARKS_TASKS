#include<stdio.h>
#include<string.h>
// accessed by admin
 int molto=0, biscuits=0,tea=0, coffee=0, cola=0, miranda=0, mint=0 , strawberry=0;
 int a_molto=0, a_biscuits=0,a_tea=0, a_coffee=0, a_cola=0, a_miranda=0, a_mint=0 , a_strawberry=0;

// proto to select mode
char S_mode(); 
//proto to subscriber login
int s_log();
//proto of list
void list();
//proto of selecting and make a receipt
int select_break();

//proto of checking balance
void check_scard();
//proto admin view
void machitim();
//proto admin editing
void admin_editing();
//proto admin login
void admin_login();
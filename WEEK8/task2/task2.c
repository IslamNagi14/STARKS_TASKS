#include<stdio.h>
#include<math.h>
typedef int i32;
struct Dif_time
{
	i32 Hr , Minu ,sec;
}St_time,Sp_time,Dif_time;

void main(void)
{
	

	printf("enter start time(hour minutes second) : ");
	scanf("%d %d  %d",&St_time.Hr,&St_time.Minu,&St_time.sec);
	
	printf("\nenter stop time(hour minutes second) : ");
	scanf("%d %d  %d",&Sp_time.Hr,&Sp_time.Minu,&Sp_time.sec);

int total_sec_start = St_time.Hr*3600+St_time.Minu*60+St_time.sec;
int total_sec_stop = Sp_time.Hr*3600+Sp_time.Minu*60+Sp_time.sec;
int dif = abs( total_sec_start - total_sec_stop);







Dif_time.Hr = dif/3600;
Dif_time.Minu = (dif%3600)/60 ;
Dif_time.sec = dif %60 ;
printf("the difference(hour minutes second) is %d %: %d %: %d",Dif_time.Hr,Dif_time.Minu,Dif_time.sec);
	
}
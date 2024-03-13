#include<stdio.h>
#include<stdlib.h>
#ifndef file_H
#define file_H
#define SUM_CALCULATOR(X,Y)  (float)X+Y
#define SUB_CALCULATOR(X,Y)  (float)X-Y
#define MUL_CALCULATOR(X,Y)  (float)X*Y

#define DIV_CALCULATOR(X,Y)    (float)X/Y							 
                            


#define SUM_ELE(arr,size)   ({\
                             int sum = 0 ;\
                            for(int i = 0;i < size; i++)\
							{ \
	                        sum+=arr[i];\
							}\
                            sum;\
                              })
						  
							
#endif			
							
	                            

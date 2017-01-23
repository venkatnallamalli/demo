#include"header.h"                                                              
                                                                                
void selection_sort(int a[], int size)                                             
{                                                                               
    int i = 0;                                                                  
    int j = 0;                                                                  
    int temp;
	int min = 0;                                                                   
                                                                                
    for(i = 0; i < (size - 1)  ; i++) {                                           
		min = i;
		for(j = (i + 1 ); j < size ; j++) {                                   
			if(a[j] < a[min]) {                                               
            	min = j;
			}                                               
        }  
		temp = a[i];                                                    
        a[i] = a[min];                                                
        a[min] = temp;
		    
    }                                                                           
}

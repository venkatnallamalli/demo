#include"header.h"                                                              
                                                                                
int binary_search(int a[], int size, int key)                                   
{                                                                                    
	int high = size + 1 ;	//intialize max size in high
	int low  = -1;			//intialize low 
	int mid;				//to store mid value
	                                                
    while(((mid != 0) && (mid != (size - 1)))) {   //iterates till mid reaches
											//to max or min
		mid = (high + low)/2;			
		if(key == a[mid])		//comapring key with mid values
			return mid;			//if found return the postion
		else if(key < a[mid])	//if key less change high to mid
			high = mid;			
		else if(key > a[mid])	//if key high change low to mid
			low = mid;
		printf(" ");
	}                                                                          
	                                                                              	 
    return -1;  //not found return -1                                           
}                                                                               
  

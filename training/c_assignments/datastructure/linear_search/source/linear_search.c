#include"header.h"

int linear_search(int a[], int size, int key)
{
	int i = 0;	//iteration
	
	for(i = 0; i < size; i++) {
		if(a[i] == key) 	//comapring the key with all elemnts
			return (i + 1);	//if found return pos 
	}	
	return -1;	//not found return -1
}
 

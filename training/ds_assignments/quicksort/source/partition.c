#include"header.h"

int partition(int arr[], int low, int high)
{
	int pos = low;
	int temp;
	int i = low + 1;
	int j = high;
	
	while(i < j) {
		while(i < high && (arr[i] < arr[pos])) {
			i++;
		}
		while(((arr[j] > arr[pos]) && (j != 1))) {
			j--;
		}
		//printf("j---%d\ni----%d\n",j,i);
		//if(i == j)
		//		j++;
		if(i < j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		
		else {
			temp = arr[pos];
			arr[pos] = arr[j];
			arr[j] = temp;
		}
	}
	return j;
}

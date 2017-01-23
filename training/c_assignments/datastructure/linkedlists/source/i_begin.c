#include"header.h"

void i_begin(int ele)
{
	sl *temp;

	if(head == NULL) {
		head = create_node(ele,NULL);
		size++;
	} else {
		temp = head;
		head = create_node(ele,temp);
		size++;
	}
}
		

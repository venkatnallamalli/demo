//header files
#include<stdio.h>
#include<stdlib.h>

#define MAX 50		//MAX value of stack
#define size_buff 12		//buffer size

int front;
int rear;                                                                 
int queue[MAX]; 
//function definations

int enqueue(int);

int dequeue();

void display();

int my_atoi(char*);

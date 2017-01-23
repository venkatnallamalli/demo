//header files
#include<stdio.h>
#include<stdlib.h>

#define MAX 5		//MAX value of stack
#define size_buff 12		//buffer size

int front;
int rear;                                                                 
int queue[MAX]; 
int count;
//function definations

void enqueue(int);

int dequeue();

void display();

int my_atoi(char*);

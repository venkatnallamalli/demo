#include<stdio.h>
#include<stdlib.h>

#define MAX 50

typedef struct bs_tree {
	int data;
	struct bs_tree *left;
	struct bs_tree *right;
}bs_tree;

bs_tree *root;

///////////

void insertion();

void display();

void inorder(bs_tree *);

void preorder(bs_tree *);

void postorder(bs_tree *);

void levelorder(bs_tree *);

void deletion();

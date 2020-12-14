//Write a 'C' program to create Doubly Link list and display it.

#include<stdio.h>
#include<conio.h>

struct node{
	struct node *left;
	int data;
	struct node *right;
};

struct node *root = NULL;

void main() {
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	
	display();
}

void insert(int data) {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = data;
	temp->left = temp->right = NULL;
	
	if(root == NULL) {
		root = temp;
	}
	else {
		struct node *p;
		
		p = root;
		
		while(p->right != NULL) {
			p = p->right;
		}
		
		p->right = temp;
		temp->left = p;
	}
	
	printf("\nData entered successfully.\n");
}

void display() {
	struct node *temp = root;
	
	if(temp == NULL) {
		printf("\nTHE LIST IS EMPTY!!\n");
	}
	else {
		while(temp != NULL) {
			printf("%d\t", temp->data);
			temp = temp->right;
		}
		printf("\n");
	}
}

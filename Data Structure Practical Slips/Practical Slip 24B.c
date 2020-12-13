// Write a 'C' program to remove last node of the singly linked list and insert it at the beginning of list.

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *root = NULL;

void main() {
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	
	swap();
	
	display();
}

void insert(int data) {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = data;
	temp->link = NULL;
	
	if(root == NULL) {
		root = temp;
	}
	else {
		struct node *p;
		
		p = root;
		
		while(p->link != NULL) {
			p = p->link;
		}
		
		p->link = temp;		
	}
	
	printf("\nData entered successfully.\n");
}

void swap() {
	struct node *l = root; // Last
	int temp;

	if(root == NULL || root->link == NULL) {
		printf("\nERROR!!\n");
	}
	else {
		while(l->link != NULL) {
			l = l->link;
		}
		
		temp = l->data;
		l->data = root->data;
		root->data = temp;
		
		printf("\nSwap successfull.\n");
	}
}

void display() {
	struct node *temp = root;
	
	if(temp == NULL) {
		printf("\nLIST IS EMPTY!!\n");
	}
	else {
		printf("\n");
		while(temp != NULL) {
			printf("%d\t", temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
}

// Write a 'C' program to remove last node of the singly linked list and insert it at the beginning of list.

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *root = NULL;

void main() {
	int n;
	
	printf("Enter the number of nodes: ");
	scanf("%d", &n);
	
	while(n > 0) {
		insert();
		n--;
	}
	
	swap();
	
	display();
}

void insert() {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	printf("\nEnter data: ");
	scanf("%d", &temp->data);
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
		
		p = temp;		
	}
	
	printf("\nData entered successfully.\n");
}

void swap() {
	
	if(root == NULL || root->link == NULL) {
		printf("\nERROR!!\n");
		return;
	}
	
	struct node *sl = root; // second last
	struct node *l = root; // last
	
	while(l->link != NULL) {
		sl = l;
		l = l->link;
	} 
	
	sl->link = root;
    l->link = root->link;
    root->link = NULL;
    root = l;
	
	printf("\nSwap successfull.\n");
}

void display() {
	struct node *temp;
	temp = root;
	
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

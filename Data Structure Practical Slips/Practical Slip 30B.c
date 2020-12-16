// Write a 'C' program to sort elements of a singly linked list in ascending order and display the sorted List.

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* link;
};
 
struct node* root = NULL;

void main() {
	int n, i;
	printf("\nEnter the number of nodes: ");
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		append();
	}
	
	printf("\nOrigginal linked list: \n");
	display();
	
	sort();
	
	printf("\nSorted linked list is: \n");
	display();
}

void append() {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	printf("\nEnter node data: ");
	scanf("%d", &temp->data);
	temp->link = NULL;
	
	if(root == NULL) {
		root = temp;
	}
	else {
		struct node* p;
		
		p = root;
		
		while(p->link != NULL) {
			p = p->link;
		}
		
		p->link = temp;
	}
	
	printf("\nData entered successfully.\n");
}

void display() {
	struct node* temp;
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

void sort() {
	struct node *p, *q;
	int temp;
	
	for(p = root; p != NULL; p = p->link) {
		for(q = p->link; q != NULL; q = q->link) {
			if(p->data > q->data) {
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

//Write a 'C' program to swap mth and nth  element of singly linked list.

#include<stdio.h>
#include<conio.h>

struct node{
	int data;
	struct node *link;
};

struct node *root = NULL;

void main() {
	int ch;
	
	while(1) {
		printf("\nMENU\n");
		printf("1. Append\n");
		printf("2. Swap\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1: append();
					break;
					
			case 2: swap();
					break;
					
			case 3: display();
					break;
					
			case 4: exit(1);
			
			default: printf("\nINVALID INPUT!!\n");
		}
	}
}

// case 1
void append() {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter node data: ");
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

// Case 2
void swap() {
	struct node *p, *q;
	int m, n, i, temp;
	
	printf("Enter the Mth position of the node you want to swap: ");
	scanf("%d", &m);	
	printf("Enter the Nth position of the node you want to swap with: ");
	scanf("%d", &n);
	
	p = q = root;
	
	// Travelling till location m
	for(i = 1; i < m && p != NULL; i++) {
		p = p->link;
	}
	
	// Travelling till location n
	for(i = 1; i < n && q != NULL; i++) {
		q = q->link;
	}
	
	// swaping
	if(p != NULL && q != NULL) {
		temp = p->data;
		p->data = q->data;
		q->data = temp;
		
		printf("\nSwaping successfull.\n");
	}
	else {
		printf("\nINVALID INPUT!!\n");
	}
}

// Case 3
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

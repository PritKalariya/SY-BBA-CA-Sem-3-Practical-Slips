//Write a 'C' program to create doubly link list and display nodes having odd value

#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *left;
	int data;
	struct node *right;
};

struct node *root = NULL;

void main() {
	int ch;
	
	while(1) {
		printf("\nMENU\n");
		printf("1. Append.\n");
		printf("2. Display.\n");
		printf("3. Exit.\n");
		
		printf("\nEnter you choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1: append();
					break;
					
			case 2: display();
					break;
					
			case 3: exit(0);
			
			default: printf("\nINVALID INPUT!!\n");
		}
	} 
}

// Case 1
void append() {
	struct node *temp;
	
	temp = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter node data: ");
	scanf("%d", &temp->data);
	
	temp->left = NULL;
	temp->right = NULL;
	
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

// Case 2
void display() {
	struct node *temp = root;
	
	if(temp == NULL) {
		printf("\nTHE LIST IS EMPTY!!\n");
	}
	else {
		while(temp != NULL) {
			if(temp->data % 2 != 0) {
				printf("%d\t", temp->data);
			}
			temp = temp->right;		
		}
		printf("\n");
	}
}

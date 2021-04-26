//Write a 'C' program to create a singly Link list and display its alternative nodes. (start displaying from first node)

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *root = NULL;

void main() {
	int ch;
	
	while(1) {
		printf("\nMenu\n");
		printf("1. Append\n");
		printf("2. Display\n");
		printf("3. Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1: append();
					break;
					
			case 2: display();
					break;
					
			case 3: exit(1);
			
			default: printf("\nINVALID INPUT!!\n");
		}
	}
}

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

void display() {
	int counter = 0;
	struct node* temp;
	temp = root;
	
	if(temp == NULL) {
		printf("\nLIST IS EMPTY!!\n");
	}
	else {
		printf("\n");
		while(temp != NULL) {
			if(counter % 2 == 0) {
				printf("%d\t", temp->data);				
			}
			counter++;
			temp = temp->link;
		}
		printf("\n");		
	}
}

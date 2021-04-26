//Write a 'C' program to count all non-zero elements, odd numbers and even numbers in the singly linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *root = NULL;

void main() {
	int ch;
	
	while(1) {
		printf("\nMenu\n");
		printf("1. Insert.\n");
		printf("2. Count.\n");
		printf("3. Exit.\n");
		
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1: insert();
					break;
					
			case 2: count();
					break;
					
			case 3: exit(1);
			
			default: printf("\nINVALID INPUT!!\n");
		}
	}
}

void insert() {
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

void count() {
	struct node *temp;
	int even, odd;
	
	even = odd = 0;
	
	temp = root;
	
	if(root == NULL) {
		printf("\nThe list is empty.\n");
	}
	else {
		while(temp->link != NULL) {
			if(temp->data % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
			temp = temp->link;
		}
		
		printf("\nEven numbers: %d", even);
		printf("\nOdd numbers: %d\n", odd);
	}
}

/*Write a 'C' program to create to a Singly linked list. Accept the number from user, search the number in the list.
- If the number is present display the Position of node.
- If number not present print the message "Number not Found".
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *root = NULL;

void main() {
	int ch, count;
	
	while(1) {
		printf("\nMenu\n");
		printf("1. Append\n");
		printf("2. Search\n");
		printf("3. Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1: append();
					break;
					
			case 2: count = search();
					if(count != 0) {
						printf("\nIndex number: %d\n", count);
					}
					else {
						printf("\nNumber not found.\n");
					}
					break;
					
			case 3: exit(1);
			
			default: printf("\nINVALID INPUT!!\n");
		}
	}
}

// 1. Append
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

int search() {
	struct node *p;
	int num, count = 1;
	
	printf("Enter number you want to search: ");
	scanf("%d", &num);
	
	p = root;
	
	while(p != NULL) {
		if(p->data == num) {
			return count;
		}
		else {
			p = p->link;
			count++;
		}
	}
	
	return 0;
}

/*Write menu driven program using 'C' for Dynamic implementation of Stack. The menu includes following operations:
-	Push
-	Pop
-	Display
-	Exit
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *top = NULL;

int main() {
	
	int ch, n;
	
	while(1) {
		printf("\nMenu\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1: printf("Enter the number: ");
					scanf("%d", &n);
					push(n);
					break;
					
			case 2: del();
					break;
					
			case 3: traverse();
					break;
					
			case 4: exit(0);
			
			default: printf("\nINVALID INPUT!\n");
		}
	}
	
	return 0;
}

// 1. Adding new value
void push(int item) {
	struct node *nptr;
	
	nptr = (struct node *)malloc(sizeof(struct node));
	
	nptr->data = item;
	nptr->next = top;
	top = nptr;
	
	printf("\n%d entered successfully.\n", nptr->data);
}

// 2. Deleting the last entered value
void del() {
	if(top == NULL) {
		printf("\nSTACK IS EMPTY!!\n");
	}
	else {
		struct node *temp;
		temp = top;
		top = top->next;
		printf("\n%d removed\n", temp->data);
		free(temp);
	}
}

// 3. Display the whole stack
void traverse() {
	struct node *temp;
	
	temp = top;
	
	while(temp != NULL) {
		printf("\n%d\t\n", temp->data);
		temp = temp->next;
	}
}

/* Write a menu driven program using 'C' for Dynamic implementation of Queue for integers. The menu includes 
-	Insert
-	Delete
-	Display
-	Exit
*/

#include<stdio.h>

int queue[];
int front = 0;
int rear = 0;

void main() {
	int ch;
	
	while(1) {
		printf("\nMENU\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1: insert();
					break;
					
			case 2: del();
					break;
					
			case 3: display();
					break;
					
			case 4: exit(1);
			
			default: printf("\nInvalid Input!!\n");
		}
	}
}

void insert() {	
	int data;
	printf("Enter data: ");
	scanf("%d", &data);
		
	queue[rear] = data;
	rear++;
		
	printf("\nData entered successfully!!\n");
}

void del() {
	int i;
	if(front == rear) {
		printf("\nThe queue is Empty!!\n");
	}
	else {
		printf("\n%d deleted\n", queue[front]);
		for(i=0; i<rear-1; i++) {
			queue[i] = queue[i + 1];
		}
		rear--;
	}
}

void display() {
	int i;
	if(front == rear) {
		printf("\nThe queue is Empty!!\n");
	}
	else {
		printf("\nThe queue elements are: ");
		for(i=front; i<rear; i++) {
			printf("%d\t", queue[i]);
		}
		printf("\n");
	}
}

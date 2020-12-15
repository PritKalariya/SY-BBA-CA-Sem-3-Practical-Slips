//Write a 'C' program to create Circular Singly Link list and display it.

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *root = NULL;

void main() {
	int n;
	
	printf("Enter the number of node you want to enter: ");
	scanf("%d", &n);
	
	create(n);
	
	display();
}

void create(int n) {
    int i, data;
    struct node *p, *temp;

    if(n >= 1) {
        root = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for node 1: ");
        scanf("%d", &data);

        root->data = data;
        root->link = NULL;

        p = root;

        for(i=2; i<=n; i++) {
            temp = (struct node *)malloc(sizeof(struct node));

            printf("Enter data for node %d: ", i);
            scanf("%d", &data);

            temp->data = data;
            temp->link = NULL;

            p->link = temp;
            p = temp;
        }
        
        p->link = root;
    }
}

void display() {
	struct node *temp;
	
	if(root == NULL) {
		printf("\nList is empty.\n");
	}
	else {
		temp = root;
		printf("\n");
		do{
			printf("%d\t", temp->data);
			temp = temp->link;
		}while(temp != root);
		printf("\n");
	}
}

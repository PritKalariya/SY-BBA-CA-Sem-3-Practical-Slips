//Write a 'C' program to read n integers and create two lists such that all positive numbers are in one list and negative numbers are in another list. 
//Display both the lists.

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* link;
};

void main() {
	struct node *l1 = NULL, *l2 = NULL;
	int n, i, a[100];
	
	printf("\nEnter the number of nodes you want to enter: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		printf("Enter node data for node %d: ", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++) {
		if(a[i] > 0) {
			l1 = insert(l1, a[i]);
		}
		else {
			l2 = insert(l2, a[i]);
		}
	}
	
	printf("\nThe positive node list is: ");
	display(l1);
	
	printf("\nThe negative node list is: ");
	display(l2);	
}

int insert(struct node *root ,int num) {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = num;
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
	
	return root;
}

void display(struct node *root) {
	struct node *temp = root;
	
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
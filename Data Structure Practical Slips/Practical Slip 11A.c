/*Write a menu driven program using 'C' for singly linked list-
-	To create linked list.
-	To display linked list
-	To search node in linked list.
-	Insert at last position
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node {
	int data;
	struct node *link;
}*start;


// 1. create
void create(int data) {
	struct node *q,*tmp;

	tmp=(struct node *)malloc(sizeof(struct node));

	tmp->data=data;
	tmp->link=NULL;
	
	if(start==NULL)	{
		start=tmp;
	}
	else {
		q=start;
		
		while(q->link!=NULL) {
			q=q->link;
		}
		
		q->link=tmp;
	}
}


// 2. Display
void display() {
	struct node *q;
	
	if(start==NULL) {
		printf("\nLIST IS EMPTY");
	}
	else {
		q=start;
		
		while(q!=NULL) {
			printf("%d->",q->data);
			q=q->link;
		}
		
		printf("NULL");
	}
}


// 3. Search
void search(int data) {
	struct node *q,*tmp;
	q=start;
	
	while(q!=NULL) {
		if(q->data==data) {
			printf("\nElement Is Found");
			break;
		}
		else {
			q=q->link;
		}
	}
	
	if(q==NULL) {
		printf("\nElement is Not Found");
	}
}


// 4. Insert at last
void insert(int data) {
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL) {
        printf("Unable to allocate memory :(");
    }
    else {
        newNode->data = data; 
        newNode->link = NULL; 

        temp = data;
        
        while(temp != NULL && temp->link != NULL) {
        	temp = temp->link;
		}            

        temp->link = newNode; 

        printf("Data inserted succesfully :) ");
    }
}


int main() {
	int ch,n,i,m,a,pos;
	start=NULL;
	
	do {
		printf("MENU");
		printf("\n1.Create");
		printf("\n2.Display");
		printf("\n3.Search");
		printf("\n4.Insert at last");
		printf("\n5.Exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch) {
			case 1:	printf("\n\nHow many nodes do you want to create? ");
					scanf("%d",&n);
					for(i=0;i<n;i++) {
						printf("\nEnter the data: ");
						scanf("%d",&m);
						create(m);
					}
					break;
					
			case 2: display();
					break;
					
			case 3: printf("\nEnter the element for search: ");
					scanf("%d",&m);
					search(m);
					break;
					
			case 4: printf("\nEnter the data: ");
					scanf("%d",&m);
					insert(m);

			case 5: exit(0);
		}
		
	} while(ch!=7);
	
	getch();
	return 0;
}

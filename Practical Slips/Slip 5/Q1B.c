/*Write a 'C' program to create linked list with given number in which data part of each node contains individual digit of the number.*/

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node {
	int data;
	struct node *next;
};

struct node *start=NULL, *temp=NULL;


int main() {
	int num,a[10],i,j;
	
	printf("enter the number: ");
	scanf("%d",&num);
	
	i=0;
	while(num>0) {
		a[i]=num%10;
		i++;
		num=num/10;
	}
	
	i--;
	printf("\nthe display of linked list is:-\n");
	for(j=i;j>=0;j--) {
		if(start==NULL) {
			start=(struct node *)malloc(sizeof(struct node));
			start->data=a[j];
			printf("%d",start->data);
			start->next=NULL;
			temp=start;
		}
		
		else {
			temp->next=(struct node *)malloc(sizeof(struct node));
			temp->next->data=a[j];
			printf(",%d",temp->next->data);
			temp->next->next=NULL;
			temp=temp->next;
		}
	}	
	
	getch();
	return 0;
}

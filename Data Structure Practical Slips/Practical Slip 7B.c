/*Write a 'C' program to create a singly linked list and count total number of nodes in it and display the list and total number of Nodes.*/

#include <stdio.h>
#include <stdlib.h>


struct node {
    int num;                    
    struct node *nextptr;       
}*stnode;             


void createNodeList(int n) {
    struct node *fnNode, *tmp;
    int num, i;
    
	stnode = (struct node *)malloc(sizeof(struct node));
    
	if(stnode == NULL) {
        printf(" Memory can not be allocated.");
    }
    else {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        
        stnode-> num = num;      
        stnode-> nextptr = NULL; 
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL) {
                printf(" Memory can not allocated.");
                break;
            }
            else {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                
                fnNode->num = num;     
                fnNode->nextptr = NULL; 
                tmp->nextptr = fnNode; 
                tmp = tmp->nextptr;
            }
        }
    }
} 


int NodeCount() {
    int ctr = 0;
    struct node *tmp;
    tmp = stnode;
    
    while(tmp != NULL) {
        ctr++;
        tmp = tmp->nextptr;
    }
    return ctr;
}


void displayList() {
    struct node *tmp;
    
    if(stnode == NULL) {
        printf(" No data found in the list.");
    }
    else {
        tmp = stnode;
        while(tmp != NULL) {
            printf(" Data = %d\n", tmp->num);   
            tmp = tmp->nextptr;                
        }
    }
}

int main()
{
    int n,totalNode;
	
    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    createNodeList(n);
    
    printf("\n Data entered in the list are : \n");		
    displayList();
    
    
    totalNode = NodeCount();
    printf("\n Total number of nodes = %d\n", totalNode);
    
    return 0;
}

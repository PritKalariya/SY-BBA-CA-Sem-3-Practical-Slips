/*
Write a 'C' program which accept an Expression and check whether the expression is Parenthesized or not using stack.
(Use Static/Dynamic implementation of Stack)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int top = -1;
char stack[100];
 

void push(char);
void pop();
void find_top();


void main() {
	int i;
	char a[100];
	
	printf("Enter expression: ");
	scanf("%s", &a);
	
	for (i = 0; a[i] != '\0';i++) {
		if (a[i] == '(') {
			push(a[i]);
		}
		else if (a[i] == ')') {
			pop();
		}
	}
	find_top();
}
 

void push(char a)
{
	stack[top] = a;
	top++;
}
 

void pop() {
	if (top == -1) {
		printf("expression is invalid\n");
		exit(0);
	}	
	else {		
		top--;
	}
}
 

void find_top() {
	if (top == -1) {
		printf("\nexpression is valid\n");
	}		
	else {
		printf("\nexpression is invalid\n");
	}		
}

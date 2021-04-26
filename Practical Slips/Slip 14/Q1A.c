// Write a 'C' program to accept a string from user and reverse it using Dynamic implementation of Stack


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>


struct Stack {
	int top;
	unsigned capacity;
	char* array;
};


struct Stack* createStack(unsigned capacity) {
	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;	
	stack->array = (char*) malloc(stack->capacity * sizeof(char));
	
	return stack;
}


int isFull(struct Stack* stack) {
	return stack->top == stack->capacity - 1; 
}


int isEmpty(struct Stack* stack) { 
	return stack->top == -1; 
}


// Add item
void push(struct Stack* stack, char item) {
	if (isFull(stack)) {
		return;
	}	
	stack->array[++stack->top] = item;
}


// remove item
char pop(struct Stack* stack) {
	if (isEmpty(stack)) {
		return INT_MIN;
	}
		
	return stack->array[stack->top--];
}


// A stack based function to reverse a string
void reverse(char str[]) {
	int n = strlen(str), i;
	struct Stack* stack = createStack(n);

	for (i = 0; i < n; i++) {
		push(stack, str[i]);
	}	

	for (i = 0; i < n; i++) {
		str[i] = pop(stack);
	}		
}


int main() {
	char str[] = "TESTING";

	reverse(str);
	printf("Reversed string is %s", str);

	return 0;
}

//Write a 'C' program Accept n elements from user store it in an array. 
//Accept a value from the user and use linear/Sequential search method to check whether the value is present in array or not. 
//Display proper message

#include<stdio.h>
#include<conio.h>

void main() {
	int arr[100], n, i, search;
	
	printf("Enter the number of elements you want in the array: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		printf("Enter value for index %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\nEnter the number you want to search in the array: ");
	scanf("%d", &search);
	
	for(i=0; i<n; i++) {
		if(arr[i] == search) {
			printf("\n%d found at %d position.\n", search, i);
			break;
		}
	}
	
	if(i == n) {
		printf("\n%d not found in the array.\n");
	}
}

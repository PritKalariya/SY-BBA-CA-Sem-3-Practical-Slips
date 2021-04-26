/*
Write a 'C' program which accept the string and reverse each word of the string using Static implementation of stack.
Example: Input - This is an input string
   Output - sihTsinatupnignirts
*/


#include <stdio.h>  
#include <string.h>  
  
#define max 100 

int top,stack[max];  
  

void push(char x) {  
      if(top == max-1){  
        printf("stack overflow");  
      }  
	  else {  
        stack[++top]=x;
      }  
  
}  
  
void pop() {    
    printf("%c",stack[top--]);  
}  
  
  
main() {
   	char str[]="Testing";  
   	int len = strlen(str);  
   	int i;  

   	for(i=0;i<len;i++) {
		push(str[i]);
   	}
  	
  	printf("\nThis the reversed string: ");
   	for(i=0;i<len;i++) {
   		pop();
	}      
}

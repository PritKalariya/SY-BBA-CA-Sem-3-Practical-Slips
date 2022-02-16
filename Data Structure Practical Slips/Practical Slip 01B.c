/*Write a 'C' program to evaluate a given polynomial using function. (Use array)*/

#include<stdio.h>
#include<math.h>
 
// function
int evaluate(int arr[], int limit, int x) {
	int sum = 0, count;
    for(count = limit; count >= 0; count--) {
        sum = sum + arr[count]*pow(x, count);
    }
    return sum;
}
 

int main() {
      int array[30], degree, x, count, result, i;

      // accepting degree
      printf("\nEnter the Degree of Polynomial:\t");
      scanf("%d", &degree);

      // accepting co-efficieents
      printf("\nEnter the Co - Efficients:\n");
      for(count = degree; count >= 0; count--) {
        printf("\nCo - Efficient of A[%d]: \t", count);
        scanf("%d", &array[count]);
      }

      // logical display
      printf("\nThe Polynomial:\n\n");
      for(i = degree; i >= 0; i--) {
    	
		if(array[i] != 0) {
            printf("%d^%d + ", array[i], i);
        }
	  }

      printf("%d", array[count]);

      printf("\n\nEnter the Value of X:\t");
      scanf("%d", &x);

      // function call
      result = evaluate(array, degree, x);
      printf("\nEvaluation of Polynomial:\t%d\n", result);

      return 0;
}

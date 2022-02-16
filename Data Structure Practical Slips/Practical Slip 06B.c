/*Write a 'C' program to accept and sort n elements in ascending order by using bubble sort.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,temp,a[20],n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The original array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    

    //Bubble Sort Logic
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    
    printf("\n");
    
    printf("\nThe sorted array is: \n");
    for (i = 0; i < n; i++)
    {
    	printf("\t%d", a[i]);
	}
	
	return 0;
    
}

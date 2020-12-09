/*Write a 'C' program to accept and sort n elements in ascending order using Selection sort method.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,temp,min,n,a[20], x;
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
    printf("\n");
    printf("\n");
    
    //Selction Sort Logic
	for(i=0; i<n-1; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{
			if(a[j] < a[min])
			{
				//storing the index value of the smallest element
				min = j;
			}
		}
		
		//swaping the minimum values
		temp = a[i];
		a[i] = a[min];
		a[min] = temp; 
		
		printf("\n");
		printf("\n");
		for(x = 0; x < n; x++)
		{
			printf("\t%d",a[x]);	
		}	
	}
	
	printf("\n");
	printf("\n");
	
	printf("The sorted array is: \n");
    for (i = 0; i < n; i++)
    {
    	printf("\t%d", a[i]);
	}
	
	return 0;    
}

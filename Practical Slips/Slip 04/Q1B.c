/*Write a 'C' program to accept two polynomial and find the addition of accepted polynomials.(use array)*/

#include<stdio.h>
#include<conio.h>
 
main() {
	int a[10], b[10], c[10],m,n,k,k1,i,j,x;
 
 
	printf("\nPolynomial Addition\n");
	printf("===================\n");
 
 
 
	printf("\nEnter the no. of terms of the polynomial:");
	scanf("%d", &m);
 
 
	printf("\nEnter the degrees and coefficients:");
	for (i=0;i<2*m;i++) {
		scanf("%d", &a[i]);
	}	
 
	printf("\nFirst polynomial is:");
 
	k1=0;
	if(a[k1+1]==1)
	printf("x^%d", a[k1]);
	else
	printf("%dx^%d", a[k1+1],a[k1]);
	k1+=2;
 
	while (k1<i) {
		printf("+%dx^%d", a[k1+1],a[k1]);
		k1+=2;
	}
 
 
	printf("\n\nEnter the no. of terms of 2nd polynomial:");
	scanf("%d", &n);
 
 
	printf("\nEnter the degrees and co-efficients:");
 
	for(j=0;j<2*n;j++) {
		scanf("%d", &b[j]);
	}
	printf("\nSecond polynomial is:");
 
	k1=0;
	if(b[k1+1]==1) {
		printf("x^%d", b[k1]);	
	}
	else {
		printf("%dx^%d",b[k1+1],b[k1]);
	}
	
	k1+=2;
	while (k1<2*n) {
		printf("+%dx^%d", b[k1+1],b[k1]);
		k1+=2;
	}
 
 
	i=0;
	j=0;
	k=0;
 
	while (m>0 && n>0) {
		if (a[i]==b[j]) {
			c[k+1]=a[i+1]+b[j+1];
			c[k]=a[i];
			m--;
			n--;
			i+=2;
			j+=2;
		}
		
		else if (a[i]>b[j]) {
			c[k+1]=a[i+1];
			c[k]=a[i];
			m--;
			i+=2;
		}
		
		else {
			c[k+1]=b[j+1];
			c[k]=b[j];
			n--;
			j+=2;
		}
		
		k+=2;
	}
 
	while (m>0) {
		c[k+1]=a[i+1];
		c[k]=a[i];
		k+=2;
		i+=2;
		m--;
	}
 
	while (n>0) {
		c[k+1]=b[j+1];
		c[k]=b[j];
		k+=2;
		j+=2;
		n--;
	}
 
 
	printf("\n\nSum of the two polynomials is:");
	
	k1=0;
	if (c[k1+1]==1) {
		printf("x^%d", c[k1]);
	}
	else {
		printf("%dx^%d", c[k1+1],c[k1]);
	}

	k1+=2;
 
	while (k1<k) {
		if (c[k1+1]==1) {
			printf("+x^%d", c[k1]);
		}
		else {
			printf("+%dx^%d", c[k1+1], c[k1]);
		}
		k1+=2;
	}
 
 
	getch();
	return 0;
 
}

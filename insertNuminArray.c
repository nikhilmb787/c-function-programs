/* WAP in C using function to insert num in array at given particular location index */

#include<stdio.h>

void in_fun(int *, int ele, int n, int p);

void main(){

	int a[10], ele, n, p;

	printf("Enter the no. of elements : ");
	scanf("%d", &ele);

	printf("\nEnter the elements: ");
	
	for(int i = 0; i < ele - 1; i++)

		scanf("%d", &a[i]);

	printf("\nEnter the number to be inserted: ");
	scanf("%d", &n);

	printf("Enter the position to be inserted: ");
	scanf("%d", &p);

        in_fun(a, ele, n, p);

	printf("\n");

	for(int i = 0; i < ele; i++)

		printf("%d ", a[i]);

}

void in_fun(int *a, int ele, int n, int p){

	for(int i = ele; i > p; i--)
		
		a[i] = a[i - 1];

	a[p] = n;

}

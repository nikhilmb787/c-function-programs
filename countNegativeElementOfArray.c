/* WAP in C using function to count -ve elements (bitwise op) and delete -ve elements in array */

#include<stdio.h>

int count_del_fun(int *, int *);

void main(){

	int a[10], b[10], ele;

	printf("Enter the no. of elements: ");
	scanf("%d", &ele);

	printf("\nEnter the elements: ");
	
	for(int i = 0; i < ele; i++)

		scanf("%d", &a[i]);

	int count = count_del_fun(a, &ele);

	printf("-ve number count = %d\n", count);
	
	for(int i = 0; i < ele; i++)

		printf("%d ", a[i]);
}

int count_del_fun(int *a, int *ele){

	int count = 0, j = 0;

	for(int i = 0; i < *ele; i++){
	
		if(a[i] >> 31 & 1)

			count++;

		else
			a[j++] = a[i];

	}

	*ele = j;

	return count;
}


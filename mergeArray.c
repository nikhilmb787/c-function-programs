/* WAP in C using function to merge 2 array data in 3rd array
 
	i/p : a[6] = {2,3,4}, b[3] = {11, 22, 33}

	o/p : c[6] = {2,11,3,22,4,33}

*/

#include<stdio.h>

void merg_fun(int *, int *, int *, int ele3);

void main(){

	int a[10], b[10], c[20], ele1, ele2, ele3;

	printf("Enter the no. of elements in array one: ");
	scanf("%d", &ele1);

	printf("\nEnter the no. of elements in array two: ");
	scanf("%d", &ele2);

	printf("\nEnter the elements in array one : ");

	for(int i = 0; i < ele1; i++)

		scanf("%d", &a[i]);


	printf("\nEnter the elements in array two : ");

	for(int i = 0; i < ele2; i++)

		scanf("%d", &b[i]);

	ele1 > ele2 ? (ele3 =  ele1) : (ele3 = ele2);

	merg_fun(a, b, c, ele3);

	printf("\n");

	for(int i = 0; i < 2 * ele3; i++)

		printf("%d ", c[i]);

}

void merg_fun(int *a, int *b, int *c, int ele3){

	int i = 0, j = 0, k = 0;

	while(j < (2 * ele3)){

		c[i++] = a[j++];

		c[i++] = b[k++];

	}

}

/* Write a program in C using function to sum of digit of all elements in array, store results in another array */

#include<stdio.h>

int sumOfDigits(int num){

        int sum = 0, rem;

        while(num != 0){

                rem = num % 10;
                num /= 10;
                sum += rem;

        }

        return sum;

}

void sumOfDigitsOfArray(int a[], int n, int r[]){

        for(int i = 0; i < n; i++){

                r[i] = sumOfDigits(a[i]);

        }
}



void main(){

        int n;

        printf("Enter the no. of elements: ");
        scanf("%d", &n);

        int a[n];
        int r[n];

        printf("Enter the elements of the array: \n");

        for(int i = 0; i < n; i++)

                scanf("%d", &a[i]);

        sumOfDigitsOfArray(a, n, r);

        for(int i = 0; i < n; i++)

                printf("%d  ", r[i]);


}
        

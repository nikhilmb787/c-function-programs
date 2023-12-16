/* WAP in c using function to delete the duplicate char from given string */

#include<stdio.h>

void del_fun(char *s);

void main(){

	char s[20];
	
	printf("Enter the string :");
	scanf("%[^\n]", s);

	del_fun(s);

	printf("\n%s ", s);

}

void del_fun(char *s){

	int l = 0;
	
	while(s[l])

		l++;

	for(int i = 0; i < l-1; i++){
	
		for(int j = i + 1; j < l; )

			if(s[i] == s[j]){

				for(int k = j; k < l; k++)

					s[k] = s[k+1];
				l--;
				
			}

			else
				j++;
	
	}




}

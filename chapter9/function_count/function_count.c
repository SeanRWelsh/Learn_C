#include  <stdio.h>

int count(int number, int array[], int length);
int number_to_check;
int main(){
	int array_size;
	printf("please enter a number between 0 and 9 you would like to check:");
	scanf("%d", &number_to_check);
	printf("\n please enter the size of your array:");
	scanf("%d",&array_size);
	int array_to_check[array_size];
	printf("\n please enter the elements in the array:");
	for(int i = 0; i<array_size; i++){
		scanf("%d", &array_to_check[i]);
	}
	
	printf("\nThe number %d appears %d times \n",number_to_check,
		       	count(number_to_check, array_to_check, array_size));	

return 0;
}

int count(int number, int array_to_check[], int array_length){
	int number_of_matches = 0;
	for(int i = 0; i<array_length; i++){
		if(number == array_to_check[i])
		       	number_of_matches++;
	}
	return number_of_matches;
}

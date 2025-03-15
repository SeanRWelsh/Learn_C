#include <stdio.h>

int main(){
	char input[20];
	int height, width;
	printf("Please enter the height of the rectangle: ");
	fgets(input, sizeof(input),stdin);
	sscanf(input, "%d", &height);

	printf("\nPlease enter the width of the rectangle: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &width);

	printf("\nThe perimeter of the rectangle is %d \n", 2*width*height);
	return(0);
}

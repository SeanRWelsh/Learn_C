#include <stdio.h>

int main(){
	char input[10];
	int minute, hour;

	printf("Please enter the number of hours: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &hour);

	printf("\nPlease enter the number of minutes: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &minute);

	printf("%d hour and %d minutes is equal to %d minutes \n", hour, minute, minute+hour*60);
	return(0);
}

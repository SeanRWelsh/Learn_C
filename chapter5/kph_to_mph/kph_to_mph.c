#include <stdio.h>

int main(){
	char input[10];
	int kph;
	printf("Please enter the speed in KPH: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &kph);

	printf("\n%dKPH = %.2fMPH\n",kph, kph*0.6213712);
	return(0);
}

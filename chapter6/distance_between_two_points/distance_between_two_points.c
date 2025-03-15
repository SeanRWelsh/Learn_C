#include <stdio.h>
#include <math.h>

int main(){
	int x1,x2,y1,y2;
	char input[20];
	float distance;

	printf("Please enter x1: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &x1);

	printf("Please enter y1: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &y1);

	printf("Please enter x2: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &x2);

	printf("Please enter y2: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &y2);

	distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

	printf("the distance between (%d,%d) and (%d,%d) is %f", x1, y1, x2, y2, distance);

	return(0);
}

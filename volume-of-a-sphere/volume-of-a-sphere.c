#include <stdio.h>

int radius;
char line[10]; /*input line from console*/
const double PI = 3.1415927; /*constant for pi */

int main(){
	printf("please enter the radius of the sphere:");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &radius);
	printf("the volume of the spehere is %.2lf \n", ((4/3)* PI * radius * radius * radius));
	return 0;
}

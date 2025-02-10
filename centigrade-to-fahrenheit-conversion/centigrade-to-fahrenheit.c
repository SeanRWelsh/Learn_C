#include <stdio.h>

int fahrenheit,centigrade;
char temp[4]; /*temperature input from console*/
double answer; /*converted temperature*/

int main(){
	printf("Please enter the temperature in Centigrade: ");
	fgets(temp, sizeof(temp), stdin);
	sscanf(temp, "%d", &centigrade);
	answer = (9.0/5) * centigrade + 32;
	printf("%d centigrade is %.2f fahrenheit \n",centigrade, answer);
	return(0);
}

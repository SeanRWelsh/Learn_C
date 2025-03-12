#include <stdio.h>
#include <math.h> /*needed for the PI definition */
#define PI acos(-1.0) /*the acos() function (arccosine) returns the angle whose cosine is the given value. Since cos(π) = -1, acos(-1.0) evaluates to π.*/

int main(){
	double radius, volume, exponent =3.0;
	printf("please enter the radius of the sphere: ");
	scanf("%lf", &radius);
	volume = ((4.0/3.0) * PI * pow(radius, exponent));
	printf("volume of the sphere is %.2lf ", volume);
}

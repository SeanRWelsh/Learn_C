#include <stdio.h>

int main(){
    int length, width;
    printf("please enter rectangle length: ");
    scanf("%d", &length);

    printf("\nplease enter the recetangle width: ");
    scanf("%d", &width);

    printf("\nperimiter is %d + %d = %d \n\n", length, width, length*width);
    printf("area is %d * %d = %d \n",length, width, length * width);

    return 0;
}
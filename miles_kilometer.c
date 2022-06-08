#include <stdio.h>
int main(void) {
    double miles, kilometer; 
    printf("Enter th distance in miles > ");
    scanf("%lf", &miles);
    kilometer = 1.609 * miles;
    printf("That equals %f kilometers. \n", kilometer);
    return 0;
}


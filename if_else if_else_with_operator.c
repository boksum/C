#include <stdio.h>
void main() {
    int num1, num2, num3;
    printf("please, input three numbers separately!");
    scanf("&d &d &d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
        printf("%d\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d\n", num2);
    else 
        printf("%d\n", num3);
}

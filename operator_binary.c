#include <stdio.h>
void main() {
    int x, y;
    x = 10;
    y = 3;
    printf("x + y = %d \n", x + y);
    printf("x / y = %d \n", x / y);
    printf("x %% y = %d \n", x % y); // %문자 출력을 위해 2개 연달아 %%로 
    printf("y %% x = %d \n", y % x);
}
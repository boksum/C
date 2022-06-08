#include <stdio.h>
void main() {
    int a, b, c;
    a = 10; 
    b = 20;
    c = 30;
    printf("a + b * c = %d \n", a + b * c);                             // 10 + ( 20 * 30) = 10 + 600 = 610
    printf("a = b += 2 * c -> a = %d \n", a = b += 2 * c);              // b = 20 + 60 = 80, a = 80
    printf("a = (b > c) ? b : c -> a = %d \n", a = (b > c) ? b : c);    // 80(=b) > 30(=c)가 참(1)이므로 b(=80)를 실행하고, a = 80
    printf("a / b * c = %d \n", a / b * c);                             // 80(=a) / 80(=b) * 30(=c) = 30 
    printf("a *= b = c +5 -> a = %d \n", a *= b = c +5);                // b = 35 이므로 a = a * b = 80 * 35 = 2800
}
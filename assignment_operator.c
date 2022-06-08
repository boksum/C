#include <stdio.h>
void main() {
    int a = 10, b = 3, c = 1;
    a *= (b - 1);       // a = a * (b - 1)의 의미
    b /= 2 + 3;         // b = b / (2 + 3)이고 정수형끼리의 나눗셈이므로 결과는 0이 됨
    c += 2;             // c = c + 2
    printf(" a = %d \n b = %d \n c = %d \n", a, b, c);
}

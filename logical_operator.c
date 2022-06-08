#include <stdio.h>
void main() {
    int a = 4, b = 7, c, d, e;
    c = a > 2 && b <= 7;            // 양쪽 모두 참이므로 참(논리곱)
    printf("c = %d \n", c);
    d = a < 2 || b <= 7;            // b가 참, a가 거짓이므로 참(논리합)
    printf("d = %d \n", d);
    e = !a;                         // a가 참(0이 아닌 모든 것이 참)이므로 e는 거짓(논리부정)
    printf("e = %d \n", e);
}


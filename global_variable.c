#include <stdio.h>
void fcn1();
int x;      // 전역변수, 가급적 프로그램 선두에 두는 것이 좋고, 초기화하지 않으면 0으로 자동 초기화 된다.
void main() {
    printf("1) x = %d \n", x);
    fcn1();
    printf("2) x = %d \n", x);
}
void fcn1() {
    x++;    // 전역변수이므로 어디서나 사용 가능
}


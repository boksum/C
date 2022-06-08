#include <stdio.h>
void static_test();
void main() {
    int i = 0;
    while(i < 5) {
        static_test();
        i++;
    }
}

void static_test() {
    static int s;       // 정적변수 s가 0으로 자동 초기화 되고 이후에 호출되면 초기화 안됨(한번만 초기화 됨)
    auto int a = 0;      // 자동변수 a 선언
    ++s;
    ++a;
    printf("static s = %d, auto a = %d \n", s, a);
}

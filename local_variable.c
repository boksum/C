#include <stdio.h>
void fcn1();
void main() {
    int i = 10;     // 변수 i는 main()함수 내부에 선언되어 main()함수에서만 사용가능한 지역변수
    printf("main i = %d \n", i);
    fcn1();
    printf("main i = %d \n", i);
}
void fcn1() {
    int i;          // 변수 i는 fcn() 함수 내부에 선언된 지역변수로, main() 함수의 변수i와는 별개로 사용됨
    i = 20;
    printf("fcn1 i = %d \n", i);
}

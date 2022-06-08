#include <stdio.h>
void swap(int* x, int* y); // swap()함수의 원형 선언
void main() {
    int a = 3, b = 5;
    printf("호출 전 a = %d, b = %d \n", a, b);
    swap(&a, &b);          // swap() 함수 호출, 주소값을 전달하기 위해 인수 앞에 주소연산자 &를 붙임
    printf("호출 후 a = %d, b = %d \n", a, b);
}
void swap(int* x, int* y) {     //주소값을 전달받기 위해 포인터변수 int *x, int *y를 선언
    int temp;   // 두 포인터변수 *x, *y의 값을 서로 바꿈
    temp = *x;
    *x = *y;
    *y = temp;
    printf("함수 내 x = %d, y = %d \n", *x, *y);
}

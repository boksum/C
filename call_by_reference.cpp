#include <stdio.h>
void swap(int& x, int& y); // swap()함수의 원형 선언
int main() {
    int a = 100, b = 200;
    printf("호출 전 a = %d, b = %d \n", a, b);
    swap(a, b);          // swap() 함수 호출, 주소값을 전달하기 위해 인수(argument) 앞에 주소연산자 &를 붙임
    printf("호출 후 a = %d, b = %d \n", a, b);
}
void swap(int& x, int& y) {     // 정수형 주소값을 갖는 패러미터(parameter) 
    int temp = x;   
    x = y;
    y = temp;
    printf("함수 내 x = %d, y = %d \n", x, y);
}

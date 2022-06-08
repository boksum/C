#include <stdio.h>
void main() {
    register int num1 = 10;     // 변수 num1은 CPU의 레지스터를 사용
    register long long int num2 = 20;
    // 변수 num2는 CPU의 레지스터를 사용
    // 32bit컴퓨터의 레지스터 크기는 32bit(4byte)이므로 8byte인 long long형 정수는 컴파일 에러가 발생한다.
    printf("num1 size = %d, num2 size = %d \n", sizeof(num1), sizeof(num2));
    printf("%p, %p \n", &num1, &num2);
    // 컴파일 에러. num1과 num2는 메모리에 없으므로 메모리 주소를 구할 수 없음
    num2 = 0;
    for(num1 = 0; num1 <= 10; ++num1)
        num2 += num1;
    num1--;
    printf("num1 = %d, num2 = %lld", num1, num2);
}


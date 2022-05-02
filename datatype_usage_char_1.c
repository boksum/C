#include <stdio.h>
void main() {
    char ch1;       //문자형 변수 ch1 선언
    char ch2;       //문자형 변수 ch2 선언
    ch1 = 1;        //10진수 1저장
    ch2 = '1';      //실제로는 '1'의 ASCII 코드값인 49 저장
    printf("ch1의 ASCII 코드값 = %d, ASCII문자 = %c \n", ch1, ch1);
    //ch1에 저장된 정수 1을 출력, ASCII 코드값 1은 SOH문자
    printf("ch2의 ASCII 코드값 = %d, ASCII문자 = %c \n", ch2, ch2);
    //ch2에 저장된 ASCII 문자 '1' 코드값 49 출력
}


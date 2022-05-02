#include <stdio.h>
#include <limits.h>         // 정수자료형 최소값, 최대값 표현
void main(){
    char ch1 = CHAR_MIN;    // char 최소값
    char ch2 = CHAR_MAX;    // char 최대값
    short sh1 = SHRT_MIN;   // short 최소값
    short sh2 = SHRT_MAX;   // short 최대값
    int in1 = INT_MIN;      // int 최소값
    int in2 = INT_MAX;      // int 최대값
    long lo1 = LONG_MIN;    // long 최소값
    long lo2 = LONG_MAX;    // long 최대값
    long long ll1 = LLONG_MIN;  // long long 최소값
    long long ll2 = LLONG_MAX;  // long long 최대값

    printf("char 자료형 범위 : %d ~ %d \n", ch1, ch2);
    printf("short 자료형 범위 : %d ~ %d \n", sh1, sh2);
    printf("int 자료형 범위 : %d ~ %d \n", in1, in2);
    printf("long 자료형 범위 : %ld ~ %ld \n", lo1, lo2);
    printf("long long 자료형 범위 : %lld ~ %lld \n", ll1, ll2);
}


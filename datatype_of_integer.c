#include <stdio.h>
#include <limits.h>         // �����ڷ��� �ּҰ�, �ִ밪 ǥ��
void main(){
    char ch1 = CHAR_MIN;    // char �ּҰ�
    char ch2 = CHAR_MAX;    // char �ִ밪
    short sh1 = SHRT_MIN;   // short �ּҰ�
    short sh2 = SHRT_MAX;   // short �ִ밪
    int in1 = INT_MIN;      // int �ּҰ�
    int in2 = INT_MAX;      // int �ִ밪
    long lo1 = LONG_MIN;    // long �ּҰ�
    long lo2 = LONG_MAX;    // long �ִ밪
    long long ll1 = LLONG_MIN;  // long long �ּҰ�
    long long ll2 = LLONG_MAX;  // long long �ִ밪

    printf("char �ڷ��� ���� : %d ~ %d \n", ch1, ch2);
    printf("short �ڷ��� ���� : %d ~ %d \n", sh1, sh2);
    printf("int �ڷ��� ���� : %d ~ %d \n", in1, in2);
    printf("long �ڷ��� ���� : %ld ~ %ld \n", lo1, lo2);
    printf("long long �ڷ��� ���� : %lld ~ %lld \n", ll1, ll2);
}


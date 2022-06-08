#include <stdio.h>
void main() {                                   // 블록 A 시작
    int x = 2, y = 4;
    printf("A : x = %d, y = %d \n", x, y);      // 블록 A의 x, y
    {                                           // 블록 B의 시작
        int x;                                  // 블록 B의 x변수의 데이터형은 int
        x = 5;                                  // 새로 정의된 블록B의 지역변수 x임
        y++;                                    // 이전 A블록에서 y가 4이므로 y++는 5
        printf("B : x = %d, y = %d \n", x, y);  // 블록 B의 x와 블록 A의 y
    }                                           // 블록 B의 끝
    printf("A : x = %d, y = %d \n", x, y);      // 블록 A의 X, y
}                                               // 블록 A의 끝
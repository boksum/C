#include <stdio.h>
#pragma warining(disable:4996)
void main() {
    int a;
    printf("정수를 입력하세요 : ");
    scanf("%d, &a");                //정수를 입력받아 변수 a에 저장
    if(a >= 0)
        if(a == 0)      // 첫 번째와 두 번째 조건을 모두 만족할 경우 출력
            printf("입력된 값은 0");
        else            // 첫번재 조건을 만족하고, 두번째 조건을 만족하지 않을 경우 출력
            printf("입력된 값은 양수");
    else                // 첫 번재 조건을 만족하지 않을 경우 출력
        printf("입력된 값은 음수");
}

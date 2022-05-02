#include "stdio.h"
void main()
{
    int i, sum;                                 // 변수 i, sum을 선언
    for(i = 1; i <= 10; i++)                    // 변수 i를 초기화하고 사용
        sum = sum +1;                           // 변수 sum을 초기화하지 않고 사용
    printf("1부터 10까지의 합 = %d \n", sum);
}

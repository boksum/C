#include <stdio.h>
void main() {
    int i = 1, sum = 0;  //while문 초기식 (i=1)
    while (i <= 10){     //i값이 11이 되면 조건식이 거짓이 되어 루프를 빠져나옴
        sum = sum + i;
        printf("%d번째 실행 : sum = %d \n", i, sum);
        i++;             // while문 증감식(i++)
    }
    printf("1부터 %d까지의 합 = %d \n", i-1, sum);    
}

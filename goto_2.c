#include <stdio.h>
#pragma warning(disable:4996)
void main 
{
    int i, n, c = 'A';
    while (1) {                         // 조건에 따른 while 반복문
        printf("횟수는 ? ");
        scanf("%d", &n);
        for(i = 1; i <= n; i++) {       // n회 반복하는 for 반복문
            printf("%c", c);
            if(c == 'Q')
                goto end;               // 레이블명 end로 무조건 실행을 옮김
            c++;
        }
        printf("\n\n");
    }
    end:                                // 레이블명 (콜론을 붙임, 세미콜론 X)
    printf("\n\n끝");
}

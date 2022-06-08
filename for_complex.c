#include <stdio.h>
void main()
{
    int i, j;
    printf("\n");
    for( i = 2 ; i <= 9 ; i++)
        printf(" - %d단- ", i);
    printf("\n");
    for( i = 1 ; i <= 9 ; i++) {                // 외부 for문, 행을 만듦
        for( j = 2 ; j <= 9 ; j++) {           // 내부 for문, 열을 만듦
            printf(" %dx%d=%2d ", j, i, j * i);
        }
        printf(" \n");
    }
}

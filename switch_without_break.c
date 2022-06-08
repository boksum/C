#include <stdio.h>
void main() {
    int n;
    printf("n = ? ");
    scanf("%d", &n);
    printf("n %% 5 = %d \n", n % 5);    // %%는 %문자 자체를 출력시킴
    switch (n % 5) {                    // 입력된 수를 5로 나누어 그 나머지에 해당하는 경우로 분기
        case 0: printf("나머지는 0 \n");
        case 1: printf("나머지는 1 \n");
        case 2: printf("나머지는 2 \n");
        default: printf("나머지는 3이나 4 \n");
        }
}

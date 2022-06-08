#include <stdio.h>
void main() {
    int n;
    printf("n = ? ");
    scanf("%d", &n);
    printf("n %% 5 = %d \n", n % 5);    // %%는 %문자 자체를 출력시킴
    switch (n % 5) {                    // 입력된 수를 5로 나누어 그 나머지에 해당하는 경우로 분기
        case 0: printf("나머지는 0 \n");
        break;
        case 1: printf("나머지는 1 \n");
        break;
        case 2: printf("나머지는 2 \n");
        break;
        case 3: printf("나머지는 3 \n");
        break;
        case 4: printf("나머지는 4 \n");
        break;
        }
}


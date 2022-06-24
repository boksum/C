#include <stdio.h>
void main() {
    int score1, score2;
    printf("과목1의 점수를 입력하세요 : ");
    scanf("%d", &score1);
    printf("과목2의 점수를 입력하세요 : ");
    scanf("%d", &score2);
    if (score1 >= 60 && score2 >= 60)
            printf("합격\n");
    else
            printf("불합격\n");
}

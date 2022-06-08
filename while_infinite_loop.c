#include <stdio.h>
void main() {
    unsigned long int f;
    int n = 0;
    printf("계승을 구할 수를 입력하세요 : ");
    //프로그램 작성시 사용자는 어떤 값도 입력할 수 있음을 고려해야 함
    scanf("%d", &n);
    f = n;
    printf("%d!=", n);
    while(--n)
      f += n;
    printf("%lu \n", f);
}
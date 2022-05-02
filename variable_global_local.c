#include <stdio.h>
int a = 100;                //전역변수 a
void func()
{
    int a = 200;
    printf("func()에서 a의 값 => %d \n", a);    //func()의 지역변수 a 출력
}

int main()
{
    printf("main()에서 a의 값 => %d \n", a);    //전역변수 출력
    func();
}

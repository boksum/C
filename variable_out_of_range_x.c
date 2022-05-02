#include <stdio.h>
void main()
{
    short int num1, num2;
    num1 = 32767+1;     //short int형의 범위를 벗어남
    num2 = -32768-1;    //short int형의 범위는 -32768~32767
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);
}

 
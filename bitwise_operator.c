#include <stdio.h>
 
int main()
{
    unsigned char num1 = 1;    // 0000 0001
    unsigned char num2 = 3;    // 0000 0011
 
    printf("%d\n", num1 & num2);    // 0000 0001: 01과 11을 비트 AND하면 01이 됨
    printf("%d\n", num1 | num2);    // 0000 0011: 01과 11을 비트 OR하면 11이 됨
    printf("%d\n", num1 ^ num2);    // 0000 0010: 01과 11을 비트 XOR하면 10이 됨
    printf("%d\n", ~num2);          // 1111 1100: 11을 비트 NOT하면 1111 1100이 됨
    printf("%d\n", num1 << 3);      // 0000 1000: 0000 0001을 왼쪽으로 3비트 이동함
    printf("%d\n", num1 >> 3);      // 0000 0000: 0000 0001을 오른쪽으로 3비트 이동함
    
    return 0;
}

#include <stdio.h>
void main() {
    int a = 10, b ;
    b = (a > 15) ? (a + 1) : (a -1);  // 조건을 만족하지 않으므로 (a -1)을 수행한다. 
    printf("b = %d", b);
}

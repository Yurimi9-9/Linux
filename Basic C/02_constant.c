/* Programming with Constant */
#include <stdio.h>

int main()
{
        printf("---- Decimal Output ----\n");   // 정수 표현 : 10, 8, 16진수
        printf("28:\t%d\n", 28);                // 10진수
        printf("0734:\t%d\n", 0734);            // 8진수
        printf("0xA2:\t%d\n", 0xA2);            // 16진수
        printf("---- Float Output ----\n");     // 실수 표현 : 소수점, 지수
        printf("1.25:\t%f\n", 1.25);            // 소수점
        printf("0.5E-2:\t%f\n", 0.5E-2);        // 실수
}

/*
*   [ 출력 ]
*   ---- Decimal Output ----
*   28:      28
*   0734:    476
*   0xA2:    162
*   ---- Float Output ----
*   1.25:    1.250000
*   0.5E-2:  0.005000
*/

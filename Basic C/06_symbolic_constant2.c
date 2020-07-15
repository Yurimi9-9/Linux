/* Symbolic Constant2 기호 상수2 */
#include <stdio.h>

#define PI 3.14159265

int main()
{
        int radius = 5;
        float area = radius*radius*PI;
        printf("---- 원 넓이 출력 ----\n");
        printf("r :\t%d\n", radius);
        printf("area :\t%f\n", area);
}

/* 
*   [ 출력 ]
*   ---- 원 넓이 출력 ----
*   r :     5
*   area :  78.539818
*/

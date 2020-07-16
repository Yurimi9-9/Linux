/* Size of Data Type */
#include <stdio.h>

int main()
{
        // sizeof : 자료형의 크기를 알아내는 연산자 (단위 : 바이트 수)
        printf("int:\t\t%d bytes\n", sizeof(int));
        printf("short:\t\t%d bytes\n", sizeof(short));
        printf("long:\t\t%d bytes\n", sizeof(long));
        printf("unsigned:\t%d bytes\n", sizeof(unsigned));
}

/*
*   [ 출력 ] 
*   int:      4 bytes
*   short:    2 bytes
*   long:     8 bytes
*   unsigned: 4 bytes
*/

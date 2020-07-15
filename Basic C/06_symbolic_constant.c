/* Symbolic Constant 기호 상수 */
#include <stdio.h>

#define BUFSIZE 12

int main()
{
        char buf[BUFSIZE] = "Programming";      // buf[BUFSIZE] == buf[12]
        printf("---- buf 출력 ----\n");
        printf("%s\n", buf);
}

/*
*   [ 출력 ]
*   ---- buf 출력 ----
*   Programming
*/

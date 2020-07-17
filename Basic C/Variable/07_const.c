/* Constant Variable */
#include <stdio.h>

int main()
{
        const int i = 10;

        i = 20;           // Error!
        printf("%d\n", i);
}


/*
*   [ 컴파일 ]
*   error: assignment of read-only variable 'i'
*   i = 20;
*     ^
*/

/* Using strcpy */
#include <stdio.h>
#include <string.h>     // strcpy를 정의하는 헤더파일

int main()
{
        char str[6];

        strcpy(str, "hello");
        printf("%s\n", str);
}


/*
*   [ 출력 ]
*   hello
*/

/* Escape Sequence 확장 문자열 */
#include <stdio.h>

int main()
{
        printf("---- 확장 문자열 ----\n");
        printf("\\a:\t\a.\n");        // 경고음
        printf("\\b:\t\b.\n");        // 백 스페이스
        printf("\\n:\t\n.\n");        // 개행
        printf("\\t:\t\t.\n");        // 수평 탭
        printf("\\v:\t\v.\n");        // 수직 탭
        printf("\\\\:\t\\.\n");       // 백 슬래시(\)
        printf("\\?:\t\?.\n");        // 물음표
        printf("\\\':\t\'.\n");       // 작은 따옴표
        printf("\\\":\t\".\n");       // 큰 따옴표
}


/*
*   [ 출력 ]
*   ---- 확장 문자열 ----
*   \a:	.
*   \b:    .
*   \n:	
*   .
*   \t:		.
*   \v:	
*           .
*   \\:	\.
*   \?:	?.
*   \':	'.
*   \":	".
*/

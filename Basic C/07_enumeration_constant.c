/* Enumeration Constant 열거형 상수 */
#include <stdio.h>

#define RAINBOW 7

int main()
{
        int i;
        enum rainbow {red, orange, yellow, green, blue, indigo, purple};
        enum rainbow2 {red2=5, orange2, yellow2, green2, blue2=3, indigo2, purple2};

        enum rainbow rb[RAINBOW] = {red, orange, yellow, green, blue, indigo, purple};
        enum rainbow2 rb2[RAINBOW] = {red2, orange2, yellow2, green2, blue2, indigo2, purple2};

        enum rainbow rb_blue = blue;
        enum rainbow2 rb2_purple2 = purple2;

        printf("rainbow : red\torange\tyellow\tgreen\tblue\tindigo\tpurple\n");
        printf("\t");
        for(i=0; i<RAINBOW; i++)
        {
                printf("%d\t", rb[i]);
        }

        printf("\nrainbow2: red2\torange2\tyellow2\tgreen2\tblue2\tindigo2\tpurple2\n");
        printf("\t");
        for(i=0; i<RAINBOW; i++)
        {
                printf("%d\t", rb2[i]);
        }

        printf("\n\n");

        printf("rainbow - blue : %d\n", rb_blue);
        printf("rainbow2 - purple2 : %d\n", rb2_purple2);
}

/*
*       [ 출력 ]
*       rainbow : red	orange	yellow	green	blue	indigo	purple
*       	0	1	2	3	4	5	6	
*       rainbow2: red2	orange2	yellow2	green2	blue2	indigo2	purple2
*       	5	6	7	8	3	4	5	
*
*       rainbow - blue : 4
*       rainbow2 - purple2 : 5
*/

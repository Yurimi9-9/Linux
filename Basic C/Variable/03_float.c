/* Floating Point Type Variable */
#include <stdio.h>

int main()
{
        float i = 1.234;
        double j = 0.12e-3;

        printf("i : %f   %e   %g\n", i, i, i);
        printf("j : %f   %e   %g\n", j, j, j);
}

/*
*   [ 출력 ]
*   i : 1.234000   1.234000e+00   1.234
*   j : 0.000120   1.200000e-04   0.00012
*/

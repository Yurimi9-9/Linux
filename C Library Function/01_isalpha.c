/* Program for Counting Alphabetic Characters = isalpha */
#include <stdio.h>

int main()
{
        int ch=0, count_alpha=0;

        printf("======== Count Alphabet ========\n");
        printf("Exit : Press Ctrl+D\n\n");
        printf("Input : ");

        // 입력이 종료될 때까지 반복
        while((ch=getchar()) != EOF)
        {
                // if alphabetic character,
                if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z'))
                        count_alpha++;
        }

        printf("\nalphabt : %d개\n", count_alpha);
}

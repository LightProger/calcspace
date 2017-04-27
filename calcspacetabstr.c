#include <stdio.h>

/*
 * Напишите программу для подсчета пробелов, табуляций и новых строк.
 */
int main() {

    int c, ns, nt, nn;
    int flag = 1;

        printf("Enter string or Enter \"~\" for EXIT and print result: ");
        printf("\n");
        while(flag == 1)
        {
            c = getchar();

            if(c == ' ')
            {
                ++ns;
            }
            else if(c == '\t')
            {
                ++nt;
            }
            else if(c == '\n')
            {
                ++nn;
            }
            else if(c == '~')
            {
                flag = 0;
            }
        }
    printf("Space: %i\nTabulate: %i\nNew string: %i\n", ns, nt, nn);
    return flag;
}
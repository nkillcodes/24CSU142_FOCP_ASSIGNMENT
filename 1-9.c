/*WAP to print following Pyramid:
 0 0
 01 01
 010 010
 0101 0101
 0101001010
*/
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", j % 2);
        }
        for (int k = 0; k < 2 * (n - i); k++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}

//WAP to print Pascal’s Triangle.
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            int fact_n = 1, fact_r = 1, fact_nr = 1;
            for (int k = 1; k <= i; k++) {
                fact_n *= k;
            }
            for (int k = 1; k <= j; k++) {
                fact_r *= k;
            }
            for (int k = 1; k <= (i - j); k++) {
                fact_nr *= k;
            }
            int comb = fact_n / (fact_r * fact_nr);
            printf("%d ", comb);
        }
        printf("\n");
    }
    return 0;
}
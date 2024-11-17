//Q2. WAP to read two integers and print their HCF (Highest Common Factor).
#include <stdio.h>
int HCF(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        }
    return a;
}
int main() {
    int n1, n2, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    hcf = HCF(n1, n2);
    printf("HCF of %d and %d is %d\n", n1, n2, hcf);
    return 0;
}
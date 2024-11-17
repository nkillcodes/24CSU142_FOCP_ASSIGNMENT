//Q4. WAP to accept two integer numbers and swap them using 4 different methods in C language.
#include <stdio.h>
void m1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void m2(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void m3(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void m4(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    m1(&n1, &n2);
    printf("After swapping with m1: n1 = %d, n2 = %d\n", n1, n2);
    m1(&n1, &n2);
    m2(&n1, &n2);
    printf("After swapping with m2: n1 = %d, n2 = %d\n", n1, n2);
    m2(&n1, &n2);
    m3(&n1, &n2);
    printf("After swapping with m3: n1 = %d, n2 = %d\n", n1, n2);
    m3(&n1, &n2);
    m4(&n1, &n2);
    printf("After swapping with m4: n1 = %d, n2 = %d\n", n1, n2);
    return 0;
}

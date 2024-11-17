//Q3. WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)

#include <stdio.h>
int sub(int x, int y) {
    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }
    while (y != 0) {
        int b = (~x) & y;
        x = x ^ y;
        y = b << 1;
    }
    return x;
}
int main() {
    int a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    result = sub(a, b);
    printf("Result of subtraction: %d\n", result);
    return 0;
}

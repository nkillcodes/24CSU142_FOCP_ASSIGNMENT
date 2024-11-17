// WAP to check whether a given is Armstrong or not
#include <stdio.h>
#include <math.h>
int main() {
    int num, o_num, rem, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    o_num = num;
    for (o_num = num; o_num != 0; ++n) {
        o_num /= 10;
    }
    o_num = num;
    for (o_num = num; o_num != 0; o_num /= 10) {
        rem = o_num % 10;
        result += pow(rem, n);
    }
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
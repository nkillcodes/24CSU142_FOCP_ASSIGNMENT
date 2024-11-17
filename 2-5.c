//WAP to find sum of all scores in Marks array.
#include <stdio.h>
int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    int Marks[size];
    printf("Enter the scores:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &Marks[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Marks[i];
    }
    printf("The sum of all scores of students is: %d\n", sum);
    return 0;
}





















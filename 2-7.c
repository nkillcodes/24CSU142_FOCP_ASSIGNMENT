//WAP to check whether score is even or odd in an array Marks.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of the students:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %d: Even\n", i + 1);
        } else {
            printf("Student %d: Odd\n", i + 1);
        }
    }
    return 0;
}
//WAP to find Who & how many students have scored 99 in an array Marks.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int Marks[n];
    printf("Enter the marks of the students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &Marks[i]);
    }
    int count = 0;
    printf("Students who scored 99:\n");
    for (int i = 0; i < n; i++) {
        if (Marks[i] == 99) {
            printf("Student %d\n", i + 1);
            count++;
        }
    }
    printf("Total number of students who scored 99: %d\n", count);
    return 0;
}
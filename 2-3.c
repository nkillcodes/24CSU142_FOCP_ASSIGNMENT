//WAP to find who scored first “99” in an array marks.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int size, i;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    int marks[size];
    printf("Enter the marks of the students:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < size; i++) {
        if (marks[i] == 99) {
            printf("The first student who scored 99 is at index %d\n", i);
            return 0;
        }
    }
    printf("No student scored 99\n");
    return 0;
}
//WAP to increase every student mark by 5 & then print the updated array
#include <stdio.h>
int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    int marks[size];
    for (int i = 0; i < size; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < size; i++) {
        marks[i] += 5;
    }
    for (int i = 0; i < size; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
    return 0;
}
/*WAP to print grade of students as per their marks given in an array.
 (>=75-- A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade).*/
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
        printf("Marks: %d - ", marks[i]);
        if (marks[i] >= 75) {
            printf("A Grade\n");
        } else if (marks[i] >= 60) {
            printf("B Grade\n");
        } else if (marks[i] >= 40) {
            printf("C Grade\n");
        } else {
            printf("D Grade\n");
        }
    }
    return 0;
}
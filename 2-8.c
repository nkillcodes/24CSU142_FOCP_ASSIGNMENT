//. WAP to find maximum & minimum score in the Marks array.
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of the students:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    int max = marks[0], min = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);
    return 0;
}
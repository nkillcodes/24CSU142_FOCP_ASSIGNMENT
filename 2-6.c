//WAP to find average score of the Marks array
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    float average = (float)sum / n;
    printf("Average score: %.2f\n", average);
    return 0;
}























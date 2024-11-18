/*Given an array of n integers. The task is to print the duplicates in the given array. 
If there are no duplicates then print -1. 
Examples:  
Input: {2, 10,10, 100, 2, 10, 11,2,11,2} 
Output: 2 10 11 
Input: {5, 40, 1, 40, 100000, 1, 5, 1} 
Output: 5 40 1*/
#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    printf("Duplicate elements are:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
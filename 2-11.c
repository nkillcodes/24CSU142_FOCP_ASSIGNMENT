#include <stdio.h>
int main() {
    int n, choice, value, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 10];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while (1) {
        printf("\nMenu:\n");
        printf("1. Display array\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at position\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array elements: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                for (int i = n; i > 0; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[0] = value;
                n++;
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position to insert the value: ");
                scanf("%d", &position);
                if (position < 0 || position > n) {
                    printf("Invalid position!\n");
                } else {
                    for (int i = n; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    n++;
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
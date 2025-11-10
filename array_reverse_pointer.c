#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assign pointer to the last element
    ptr = &arr[n - 1];
    printf("\nArray elements in reverse order:\n");
    for(i = n; i > 0; i--) {
        printf("%d ", *ptr);
        ptr--; // move pointer backward
    }
    return 0;
}
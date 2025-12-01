// Q70: Rotate an array to the right by k positions.

#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle k > n
    int result[n];

    // Place last k elements at the beginning
    for (int i = 0; i < k; i++) {
        result[i] = arr[n - k + i];
    }

    // Shift the rest
    for (int i = k; i < n; i++) {
        result[i] = arr[i - k];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}

int main() {
    int n, k;

    // Read input size
    printf("Enter no of element in array: ");
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    printf("Enter %d element in array: ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read rotation count
    printf("Enter size to be rotated: ");
    scanf("%d", &k);

    // Rotate the array
    rotateRight(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

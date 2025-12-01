// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, element, i, pos;

    // Read the number of elements
    scanf("%d", &n);

    int arr[100];  

    // Read the sorted array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to insert
    scanf("%d", &element);

    // Find the position to insert
    pos = n; 
    for(i = 0; i < n; i++) {
        if(arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++; 

    // Print the updated array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

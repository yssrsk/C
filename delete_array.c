#include <stdio.h>

void deleteElement(int arr[], int *n, int element) {
    int i, found = 0;
    for (i = 0; i < *n; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        // Shift elements to the left
        for (int j = i; j < *n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        (*n)--; // Decrease the size of the array
    } else {
        printf("Element not found!\n");
    }
}

int main() {
    int arr[100], n, element, i;
    
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Input elements of the array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    
    // Call function to delete the element
    deleteElement(arr, &n, element);
    
    // Output the array after deletion
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

#include <stdio.h>

int main() {
    int arr[100], n, num, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            break;
        }
    }

    
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    
    arr[i] = num;
    n++; 

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

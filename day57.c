#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        
        if (i == n - 1)
            printf("%d", prevGreater);
        else
            printf("%d, ", prevGreater);
    }

    return 0;
}

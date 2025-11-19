#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            result = mid;       
            right = mid - 1;   
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, x;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int idx = ceilIndex(arr, n, x);
    printf("%d\n", idx);

    return 0;
}

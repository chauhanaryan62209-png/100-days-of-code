#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xorAll = 0, xorArr = 0;

    
    for (int i = 0; i <= n; i++) {
        xorAll ^= i;
    }

    
    for (int i = 0; i < n; i++) {
        xorArr ^= arr[i];
    }

    
    int missing = xorAll ^ xorArr;

    printf("%d\n", missing);

    return 0;
}

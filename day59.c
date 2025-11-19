#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n <= 0) {
        
        int k;
        if (scanf("%d", &k) == 1) printf("-1\n");
        return 0;
    }

    long long arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }

    int k;
    if (scanf("%d", &k) != 1) return 0;

    if (k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }

    
    long long window_sum = 0;
    for (int i = 0; i < k; ++i) window_sum += arr[i];

    long long max_sum = window_sum;

    for (int i = k; i < n; ++i) {
        window_sum += arr[i];
        window_sum -= arr[i - k];
        if (window_sum > max_sum) max_sum = window_sum;
    }

    printf("%lld\n", max_sum);
    return 0;
}

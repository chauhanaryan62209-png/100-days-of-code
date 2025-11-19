#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    long long S = (long long)n * (n + 1) / 2;
    long long x = sqrt(S);

    if (x * x == S)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  
    int count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            product *= i;
            count++;
        }
    }

    if (count == 0)
        printf("\nNo even numbers found between 1 and %d.\n", n);
    else
        printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}

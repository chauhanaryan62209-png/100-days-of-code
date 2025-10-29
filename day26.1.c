#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; 

    for(i = n; i >= 1; i--) {
        
        for(space = 1; space < i; space++) {
            printf(" ");
        }

        
        for(j = i; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n"); 
    }

    return 0;
}

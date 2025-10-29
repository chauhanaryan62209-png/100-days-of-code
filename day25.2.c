#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; 

    for(i = 1; i <= n; i++) {
        
        for(space = 1; space < i; space++) {
            printf(" ");
        }

        
        for(j = i; j <= n; j++) {
            printf("*");
        }

        printf("\n"); 
    }

    return 0;
}

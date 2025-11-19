#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    if (n > 0) {
        
        int i = 0;
        while (i < n && str[i] == ' ')
            i++;

        if (i < n)
            str[i] = toupper(str[i]);

        
        for (int j = i + 1; j < n; j++) {
            str[j] = tolower(str[j]);
        }
    }

    printf("%s\n", str);

    return 0;
}

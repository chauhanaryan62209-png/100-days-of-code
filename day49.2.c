#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name); 
    
    while (name[i] != '\0') {
        if (name[i] == ' ')
            lastSpace = i;
        i++;
    }

    
    if (name[0] != ' ') {
        printf("%c.", name[0]);
    }

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }

    
    if (lastSpace != -1) {
        printf(" %s\n", &name[lastSpace + 1]);
    } else {
        
        printf("%s\n", name);
    }

    return 0;
}

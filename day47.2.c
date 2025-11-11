#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLength = 0, length = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (str[i] != '\0') {
        
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; 
            length = strlen(word);

            if (length > maxLength) {
                maxLength = length;
                strcpy(longest, word);  
            }

            j = 0; 
        }
        i++;
    }

    word[j] = '\0';
    length = strlen(word);
    if (length > maxLength) {
        maxLength = length;
        strcpy(longest, word);
    }

    printf("The longest word is: %s\n", longest);
    printf("Length of longest word: %d\n", maxLength);

    return 0;
}

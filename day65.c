#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freqS[26] = {0}, freqT[26] = {0};

    
    scanf("%s", s);
    scanf("%s", t);

    
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }


    for (int i = 0; s[i] != '\0'; i++) {
        freqS[s[i] - 'a']++;
    }

    
    for (int i = 0; t[i] != '\0'; i++) {
        freqT[t[i] - 'a']++;
    }

    
    for (int i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

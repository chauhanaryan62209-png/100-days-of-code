#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i = 0, flag = 0;

    printf("Enter first string: ");
    gets(str1);  
    printf("Enter second string: ");
    gets(str2);

    
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
        i++;
    }

    i = 0;
    
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
        i++;
    }

    
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The strings are anagrams of each other.\n");
    else
        printf("The strings are NOT anagrams of each other.\n");

    return 0;
}

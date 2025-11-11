#include <stdio.h>
#include <string.h>

int main() {
    char date[20], newDate[30];
    char monthNum[3], monthName[10];
    int i, day, year;

    printf("Enter date in format dd/mm/yyyy: ");
    gets(date);  

    
    sscanf(date, "%d/%2s/%d", &day, monthNum, &year);

    
    if (strcmp(monthNum, "01") == 0) strcpy(monthName, "Jan");
    else if (strcmp(monthNum, "02") == 0) strcpy(monthName, "Feb");
    else if (strcmp(monthNum, "03") == 0) strcpy(monthName, "Mar");
    else if (strcmp(monthNum, "04") == 0) strcpy(monthName, "Apr");
    else if (strcmp(monthNum, "05") == 0) strcpy(monthName, "May");
    else if (strcmp(monthNum, "06") == 0) strcpy(monthName, "Jun");
    else if (strcmp(monthNum, "07") == 0) strcpy(monthName, "Jul");
    else if (strcmp(monthNum, "08") == 0) strcpy(monthName, "Aug");
    else if (strcmp(monthNum, "09") == 0) strcpy(monthName, "Sep");
    else if (strcmp(monthNum, "10") == 0) strcpy(monthName, "Oct");
    else if (strcmp(monthNum, "11") == 0) strcpy(monthName, "Nov");
    else if (strcmp(monthNum, "12") == 0) strcpy(monthName, "Dec");
    else strcpy(monthName, "Invalid");

    
    if (strcmp(monthName, "Invalid") != 0)
        printf("New date format: %02d-%s-%d\n", day, monthName, year);
    else
        printf("Invalid month entered.\n");

    return 0;
}

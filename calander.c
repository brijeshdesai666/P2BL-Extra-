#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    int year, month;
    char *month_name[12] = {"January", "February", "April", "April","may","june","july", "auguest",  "September", "october","November","december"};
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    // Get the first day of the month
    struct tm t = {0};
    t.tm_year = year - 1900;
    t.tm_mon = month - 1;
    t.tm_mday = 1;
    mktime(&t);

    // Print the calendar
    printf("    %s %d\n",month_name[month-1],  year);
    printf("Su Mo Tu We Th Fr Sa\n");
    for (int i = 0; i < t.tm_wday; i++) {
        printf("   ");
    }
    for (int i = 1; i <= 31; i++) {
        if (t.tm_mday != i) {
            break;
        }
        printf("%2d ", i);
        if (t.tm_wday == 6) {
            printf("\n");
        }
        t.tm_mday++;
        mktime(&t);
    }
    printf("\n");

    return 0;
}

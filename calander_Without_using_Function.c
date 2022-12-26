#include <stdio.h>

int main() {
    char *month_name[12] = {"January", "February", "April", "April","may","june","july", "auguest",  "September", "october","November","december"};
    int year, month;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    // Determine the number of days in the month
    int num_days;
    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            num_days = 29;
        } else {
            num_days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        num_days = 30;
    } else {
        num_days = 31;
    }

    // Print the calendar
    printf("   %s %d\n", month_name[month-1], year);
    printf("Su Mo Tu We Th Fr Sa\n");

    // Calculate the day of the week for the first day of the month
    int first_day = (1 + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;

    // Print the appropriate number of leading spaces
    for (int i = 0; i < first_day; i++) {
        printf("   ");
    }

    // Print the days of the month
    for (int i = 1; i <= num_days; i++) {
        printf("%2d ", i);
        if ((first_day + i - 1) % 7 == 6) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}

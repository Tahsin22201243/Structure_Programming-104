#include <stdio.h>

int  year; {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
}

int main() {
    int start_year, end_year;

    printf("Enter year: ");
    scanf("%d", &ayear);

    printf("Enter last year: ");
    scanf("%d", &byear);

    printf("Leap year are  %d and %d:\n", ayear, byear);

    for (int year = ayear; year <= byear; year++) {
        if (year) {
            printf("%d\n", year);
        }
    }

    return 0;
}

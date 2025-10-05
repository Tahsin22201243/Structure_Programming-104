#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Leap years from 1 to %d: ", N);

    for (int year = 1; year <= N; year++){
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
    }

    printf("\n");

}


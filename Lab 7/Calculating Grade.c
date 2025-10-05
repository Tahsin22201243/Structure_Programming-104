#include <stdio.h>

float calculateAverage(int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return (float) sum / size;
}

int findHighest(int grades[], int size) {
    int highest = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

int findLowest(int grades[], int size) {
    int lowest = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

int main() {
    int numStudents;

    printf("Welcome to Student Grade Analysis!\n\n");

    printf("Number of students: ");
    scanf("%d", &numStudents);

    int grades[numStudents];

    printf("The grades of the students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    printf("Menu:\n");
    printf("1. Calculate average grade\n");
    printf("2. Find highest grade\n");
    printf("3. Find lowest grade\n");
    printf("4. Exit\n");
}

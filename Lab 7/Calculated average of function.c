
double calculateAverage(int grades[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += grades[i];
    }
    return (double)sum / size;
}


int findHighest(int grades[], int size)
{
    int highest = grades[0];
    for (int i = 1; i < size; i++)
    {
        if (grades[i] > highest)
        {
            highest = grades[i];
        }
    }
    return highest;
}


int findLowest(int grades[], int size)
{
    int lowest = grades[0];
    for (int i = 1; i < size; i++)
    {
        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }
    return lowest;
}

int main()
{
    printf("Welcome \n\n");

    int numStudents;
    printf("Number of students: ");
    scanf("%d", &numStudents);

    int grades[numStudents];
    printf("\n Grades of the students:\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    int choice = 0;
    while (choice != 4)
    {
        printf("\nMenu:\n");
        printf("1.Average grade\n");
        printf("2.Highest grade\n");
        printf("3.Lowest grade\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nAverage : %.2f\n", calculateAverage(grades, numStudents));
        }
        else if (choice == 2)
        {
            printf("\nHighest : %d\n", findHighest(grades, numStudents));
        }
        else if (choice == 3)
        {
            printf("\nLowest : %d\n", findLowest(grades, numStudents));
        }
        else if (choice == 4)
        {
            printf("\nThank you\n");
        }
        else
        {
            printf("\nInvalid \n");
        }
    }

    return 0;
}

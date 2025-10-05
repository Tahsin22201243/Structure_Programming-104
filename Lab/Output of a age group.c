#include <stdio.h>

int main()
{
    int age;

    while (1)
    {
        printf("Enter age (enter 0 to exit): ");
        scanf("%d", &age);

        if (age == 0)
        {
            printf("Exit.\n");
            break;
        }
        else if (age <= 0)
        {
            printf("Invalid \n");
        }
        else if (age <= 3)
        {
            printf("%d is Toddler\n", age);
        }
        else if (age <= 9)
        {
            printf("%d is Child\n", age);
        }
        else if (age <= 12)
        {
            printf("%d is Tween \n", age);
        }
        else if (age <= 19)
        {
            printf("%d is Teen\n", age);
        }
        else if (age <= 24)
        {
            printf("%d is Young Adult \n", age);
        }
        else if (age >=25)
        {
            printf("%d is Adult \n", age);
        }

    }

}

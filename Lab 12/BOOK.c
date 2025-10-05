#include<stdio.h>
#include<string.h>


    struct Book
    {
        char title[100];
        char author[100];
        double price;
    };
    int main()
    {
        struct Book library[100];
    library[0].price = 19.99;

    strcpy(library[0].title, "The Great Gatsby");
    strcpy(library[0].author, "F. Scott Fitzgerald");
    library[0].price = 12.99;

    strcpy(library[1].title, "To Kill a Mockingbird");
    strcpy(library[1].author, "Harper Lee");
    library[1].price = 10.99;
    for (int i = 0; i < 100; i++)
    {
        printf("Book %d: %s by %s, $%.2f\n", i + 1, library[i].title, library[i].author, library[i].price);
    }

    }



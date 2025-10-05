#include<stdio.h>
int main()
{
    int N,row,col;
    printf("enter number");

    scanf("%d",&N);
    for(row=1; row<=N; row++)
    {
        for(col=1; col<=N; col++)
        {
            printf("%d",row);
        }

        printf("\n");

    }
}


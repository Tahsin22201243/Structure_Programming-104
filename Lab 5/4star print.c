#include<stdio.h>
int main()
{
    int N,row,col,count=0;
    printf("enter number");

    scanf("%d",&N);
    for(row=2; row<=N; row++)
    {
        count++;
        for(col=1; col<=count; col++)
        {
            printf("%d",col);

        }

        printf("\n");

    }
}


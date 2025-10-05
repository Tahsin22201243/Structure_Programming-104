#include<stdio.h>
int main()
{
    int N,row,col,count=0;
    printf("enter number");

    scanf("%d",&N);
    for(row=1; row<=N; row++)
    {

        for(col=1; col<=row; col++)
        {
            printf(" %d",++count);


        }

        printf(" \n");

    }
}


#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("Enter N:",n);

    scanf("%d",&n);

    for ( i=1 ; i <= n; i++)
    {
        j=i*i;
       k=i*i*i;
        printf("Square and cube of %d= %d\n %d\n",i,j,k);
    }





}

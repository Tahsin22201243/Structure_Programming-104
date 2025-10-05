#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter number :",n);

    scanf("%d",&n);

    for ( int i=1 ; i <= n; i++){

        if(n%i==0)
        {

            printf("Divisors are = %d\n ",i);

        }

    }


}

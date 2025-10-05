#include<stdio.h>
int main()
{
    int i=3,n,sum=0;

    printf("Enter N:",n);

    scanf("%d",&n);

    for ( i ; i <= n; i += 4)
        sum += i;

    printf("Sum is:%d\n",sum);
}

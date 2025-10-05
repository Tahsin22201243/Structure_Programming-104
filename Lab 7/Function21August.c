#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("Enter number:");
    scanf("%d %d",&a,&b);

    int p = sum(a,b);
    printf("The sum is: %d",p);
    return 0;
}

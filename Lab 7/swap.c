#include<stdio.h>

int a,b;
void swap()
{
    int temp;
     temp = a;
    a = b;
    b = temp;


}

int main()
{
     a=5;
     b=10;
      printf("Two number are:%d %d\n ",a,b);
     swap();
    printf("Two number are:%d %d\n ",a,b);

}

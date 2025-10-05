#include<stdio.h>

float amount()
{
   float amt;
    scanf("%f",&amt);
    return amt;
}

float convert_to_eur(float amt)
{
    return amt*0.85;

}

float convert_to_gbp(float amt)
{

    return amt*0.73;
}

float main()
{
    float d;
    printf("Enter the amount to be converted: ");
    d = amount();
    printf("%f",d);
    return 0;


}

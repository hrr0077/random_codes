#include<stdio.h>

const float pi = 3.14;

float cal_area(int r)
{
    return (pi*r*r);
}

void main()
{
    int radius;
    printf("Enter the Radius of Circle to Print its Area = ");
    scanf("%i",&radius);
    printf("\nYour Area = %f sq. cm\n",cal_area(radius));
}
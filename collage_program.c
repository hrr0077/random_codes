#include<stdio.h>

void main()
{
    int num, result=1, i;

    printf("Enter a Number to compute the Factorial = ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        result = result*i;
    }

    printf("\n Result = %d \n",result);
}
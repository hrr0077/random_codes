#include<stdio.h>
#include<math.h>

double findSQRT(double N)
{
    return pow(2,0.5*log2(N));
}



int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<=findSQRT(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else{
            return 1;
        }
    }
}

void main()
{
    int num;
    printf("Enter a number to check for Prime = ");
    scanf("%d",&num);

    if(isPrime(num))
    {
        printf("\nEntered number is prime");
    }
    else{
        printf("\nEntered Number is Not Prime");
    }
}
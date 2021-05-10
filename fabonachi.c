#include<stdio.h>


//With iteration
/*void printFibonacci(int n){
    static int n1 = 0,n2 = 1, n3;
    if(n>0)
    {
        n3 = n1+ n2;
        n1 = n2;
        n2 = n3;
        printf("%d, \t",n3);
        printFibonacci(n-1);
    }
}*/

void main()
{
    int first_digit = 1;
    int secound_digit = 1;
    int final = 0, terms;

    printf("\nEnter the Number of terms to print the fabonachi sequence = ");
    scanf("%d",&terms);

    printf("Fiboonachi = %d,\t%d,\t",first_digit,secound_digit);

    for(int i=1;i<(terms-2);i++)
    {
        final = first_digit + secound_digit;
        printf("%d,\t",final);
        first_digit = secound_digit;
        secound_digit = final;
    }

    printFibonacci(terms-2);
}
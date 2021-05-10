#include<stdio.h>

void main()
{
    int n,m;

    printf("Enter the Number of Terms terms = ");
    scanf("%d", &n);
    m = n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
}
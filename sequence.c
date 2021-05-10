#include<stdio.h>

int print_Seq()
{
    printf("1+2-3+4-5+6-7+8-9+10-........");
    return 0;
}

void main()
{
    int sum = 0;
    int i,q = 0,p = 0,terms=0;

    print_Seq();
    printf("\nEnter the terms of which sum is taken = ");
    scanf("%d",&terms);
    terms = terms / 2;
    for(i=0;i<terms;i++)
    {
        q = q + (1 + 2*i);
    }

    printf("\nq = %d",q);


    for(i=1;i<=terms;i++);
    {
        p = 2*i;
        printf("\np = %d",p);
    }

    printf("\np = %d",p);
    sum = p - q;
   

    printf("\n The Result = %d \n",sum);

}
#include<stdio.h>
#include<stdlib.h>

void main()
{
char v;
printf("Do You Want to shutdown the P.C");
scanf("%c",&v);
if(v=='Y' || v == 'y')
{
system("shutdown -P now");
}
}

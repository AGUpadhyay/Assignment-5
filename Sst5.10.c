//WAP to print a table of N.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number you want to be print table: ");
    scanf("%d",&n);
    printf("Table of %d\n",n);
    for(i=1;i<=10;i++)
    printf("%d*%d=%d\n",n,i,n*i);
    return 0;
}

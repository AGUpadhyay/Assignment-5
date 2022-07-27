//WAP to print square of the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number you want to be print square of natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("Square of %d is %d\n",i,i*i);
    return 0;
}

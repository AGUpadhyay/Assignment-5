//WAP to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number you want to be print odd natural numbers in reverse order: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d\t",2*i-1);
    return 0;
}

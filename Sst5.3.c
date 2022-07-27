//WAP to print the first N natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number you want to be print natural numbers in reverse order: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d\t",i);
    return 0;
}

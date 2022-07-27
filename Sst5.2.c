//WAP to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number you want to be print natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\t",i);
    return 0;
}

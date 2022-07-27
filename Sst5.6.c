//WAP to print the first N even natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number you want to be print even natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\t",2*i);
    return 0;
}

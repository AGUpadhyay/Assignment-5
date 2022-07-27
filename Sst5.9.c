//WAP to print cubes of the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number you want to be print cubes of natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("Cube of %d is %d\n",i,i*i*i);
    return 0;
}

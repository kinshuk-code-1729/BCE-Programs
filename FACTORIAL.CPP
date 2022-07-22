// Program to find factorial of a no. using while statement
#include <stdio.h>
int main()
{
    int i,n,fact;
    i=1;
    fact=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while (i<=n)
    {
        fact=fact*i;
        i++;
        }
        printf("The factorial of %d is %d",n,fact);
    return 0;
}

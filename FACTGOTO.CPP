// Program to find factorial of a no. using goto statement
#include <stdio.h>
int main()
{
    int n,fact,i;
    fact=1;
    i=1;
    printf("Enter any number to find its factorial : ");
    scanf("%d",&n);
    printf("Factorial of %d is : ",n);
    label:
    fact=fact*i;
    i++;
    if(i<=n) goto label;
    printf("%d",fact);
    return 0;

}

// Program to find sum of 'n' odd numbers using while statement
#include <stdio.h>
int main()
{
    int i,n,sum;
    sum=0;
    i=1;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    while (i<=n)
    {
	sum = sum+i;
	i=i+2;
    }
 printf("%d",sum);
 return 0;
}

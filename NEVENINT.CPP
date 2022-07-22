// Program to print even numbers from 1 to n
#include <stdio.h>
int main()
{
    int n;
    printf("even numbers upto : ");
    scanf("%d",&n);
    int i=2;
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}

// Program to find larger number b/w 3 no. with either equal condition using switchcase statement
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);
    printf("Enter third number : ");
    scanf("%d",&y);
    switch(x==y)
    {case 1:printf("\nFirst two numbers are equal");
    break;
    }
    switch(y==z)
    {case 1:printf("\nBoth 2nd & 3rd numbers are equal");
     break;
    }
    switch(x==z)
    {case 1:printf("\nBoth 1st & 3rd numbers are equal");
     break;
    }
    switch(x==y&&y==z)
    {case 1:printf("\nAll the numbers are equal");
     break;
    }
    switch(x>y)
    {
        case 1 : printf("%d is greatest",x);
        break;
        case 0 : switch(y>z)
        {
            {case 1 : printf("%d is greatest",y);
            break;
            }
            {case 0 : printf("%d is greatest",z);
            }
        }
    }
 return 0;
}

// Program to find larger number b/w 3 no. using switchcase statement
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

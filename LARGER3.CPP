// Program to check the larger between three numbers
#include <stdio.h>
int main()
{
  int x,y,z;
  printf("Enter first number : ");
  scanf("%d",&x);
  printf("Enter second number : ");
  scanf("%d",&y);
  printf("Enter third number : ");
  scanf("%d",&z);
  if (x>y)
   {if (x>z)
     printf("%d is greater than %d and %d",x,y,z);
    else
     printf("%d is greater than %d and %d",z,x,y);
    }

  else
   {if (y>z)
     printf("%d is greater than %d and %d",y,x,z);
    else
     printf("%d is greater than %d and %d",z,x,y);
    }
  return 0;
  }


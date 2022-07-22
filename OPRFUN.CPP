//Program to perform specific operation on 2 no.s using user defined functions
#include <stdio.h>
int a,b,c,op;
int sum()
{  c=a+b;
   printf("The addition of %d and %d is %d",a,b,c);
   return 0;
   }
int difference()
{  c=a-b;
   printf("The subtraction of %d and %d is %d",a,b,c);
   return 0;
   }
int product()
{  c=a*b;
   printf("The multiplication of %d and %d is %d",a,b,c);
   return 0;
   }
int division()
{  c=a/b;
   printf("The division of %d and %d is %d",a,b,c);
   return 0;
   }
int main()
{ 
  printf("Enter first number : ");
  scanf("%d",&a);
  printf("\nEnter second number : ");
  scanf("%d",&b);
  printf("\n1.ADDITION");
  printf("\n2.SUBTRACTION");
  printf("\n3.MULTIPLICATION");
  printf("\n4.DIVISION");
  printf("\nChoose Your Operation : ");
  scanf("%d",&op);
  if (op==1)
  sum();
  else if (op==2)
  difference();
  else if (op==3)
  product();
  else if (op==4)
  division();
  else
   printf("\nINVALID INPUT!!! , Please enter valid operation");
 return 0;
}

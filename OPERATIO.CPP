// Program to perform specific operation on two numbers
#include <stdio.h>
int main()
{ int a,b,c,op;
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
   { c=a+b;
   printf("The addition of %d and %d is %d",a,b,c);
   }
  else if (op==2)
   {c=a-b;
   printf("The subtraction of %d and %d is %d",a,b,c);
   }
  else if (op==3)
   {c=a*b;
   printf("The multiplication of %d and %d is %d",a,b,c);
   }
  else if (op==4)
   {c=a/b;
   printf("The division of %d and %d is %d",a,b,c);
   }
  else
   printf("\nINVALID INPUT!!! , Please enter valid operation");

return 0;
}
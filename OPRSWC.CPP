// Program to perform specific operation on two numbers using switchcase statement
#include <stdio.h>
int main()
 {
  int a,b,c,op;
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
   switch(op)
   {
    case 1: c=a+b;
	    printf("\nThe addition of %d and %d is %d",a,b,c);
	    break;
    case 2: c=a-b;
	    printf("\nThe subtraction of %d and %d is %d",a,b,c);
	    break;
    case 3: c=a*b;
	    printf("\nThe multiplication of %d and %d is %d",a,b,c);
	    break;
    case 4: c=a/b;
	    printf("\nThe division of %d and %d is %d",a,b,c);
	    break;
    default: printf("INVALID INPUT!!! , Please enter valid operation");
    }
   return 0;
  }

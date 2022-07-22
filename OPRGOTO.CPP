// Program to perform specific operation on two numbers using goto statement
#include <stdio.h>

int main()
{
  int x,y,z,op;
  printf("Enter first number : ");
  scanf("%d",&x);
  printf("\nEnter second number : ");
  scanf("%d",&y);
  printf("\n1.ADDITION");
  printf("\n2.SUBTRACTION");
  printf("\n3.MULTIPLICATION");
  printf("\n4.DIVISION");
  printf("\nChoose Your Operation : ");
  scanf("%d",&op);

   if(op==1) goto sum;
   if(op==2) goto difference;
   if(op==3) goto product;
   if(op==4) goto division;
   if(op>4) goto wrong;

   sum :
   z=x+y;
   printf("The ADDITION of %d and %d is %d",x,y,z);
   goto end;
   difference :
   z=x-y;
   printf("The SUBTRACTION of %d and %d is %d",x,y,z);
   goto end;
   product :
   z=x*y;
   printf("The MULTIPLICATION of %d and %d is %d",x,y,z);
   goto end;
   division :
   z=x/y;
   printf("The DIVISION of %d and %d is %d",x,y,z);
   goto end;
   wrong :
   printf("\nINVALID INPUT!!! , Please enter valid operation");
   goto end;
   end :

return 0;
}

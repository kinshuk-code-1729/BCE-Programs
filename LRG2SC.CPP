// Program to find larger b/w 2 no. using switchcase statement
#include <stdio.h>
int main()
{
 int x,y;
 printf("\nEnter first number : ");
 scanf("%d",&x);
 printf("\nEnter second number : ");
 scanf("%d",&y);
 switch(x>y)
 {
  case 0: printf("%d is greater than %d",y,x);
	  break;
  case 1:printf("%d is greater than %d",x,y);
 }
 return 0;
}

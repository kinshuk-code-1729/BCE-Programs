// Program to print digits (0 to 9) in words using goto statement
#include <stdio.h>
int main()
{
 int n;
 printf("Enter any digit (0 to 9) : ");
 scanf("%d",&n);

  if(n==0) goto l1;
  if(n==1) goto l2;
  if(n==2) goto l3;
  if(n==3) goto l4;
  if(n==4) goto l5;
  if(n==5) goto l6;
  if(n==6) goto l7;
  if(n==7) goto l8;
  if(n==8) goto l9;
  if(n==9) goto l10;
  if(n>9) goto wrong;
  l1 :
  printf("\nZero");
  goto end;
  l2 :
  printf("\nOne");
  goto end;
  l3 :
  printf("\nTwo");
  goto end;
  l4 :
  printf("\nThree");
  goto end;
  l5 :
  printf("\nFour");
  goto end;
  l6 :
  printf("\nFive");
  goto end;
  l7 :
  printf("\nSix");
  goto end;
  l8 :
  printf("\nSeven");
  goto end;
  l9 :
  printf("\nEight");
  goto end;
  l10 :
  printf("\nNine");
  goto end;
  wrong :
  printf("INVALID INPUT !!! , Please enter single digit");
  goto end;
  end :
return 0;
}

// Program to show the working of a structure
#include <stdio.h>
struct mystruct
{ int a,b;
  char c;
  };
int main()
{
 mystruct s;
 printf("\nEnter values of a,b,c : ");
 scanf("%d",&s.a);
 scanf("%d",&s.b);
 scanf(" %c",&s.c);
 printf("a = %d ",s.a);
 printf("\nb = %d ",s.b);
 printf("\nc = %c ",s.c);
 return 0;
}
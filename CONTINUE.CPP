// Program to demonstrate the working of continue statement
#include <stdio.h>
int main()
{
 int i;
 for(i=0;i<10;i++)
 {
   if(i%5==0)
    continue;
   printf("%d",i);
  }
  printf("OUT");
  return 0;
}

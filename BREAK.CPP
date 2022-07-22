// Program to demonstrate the working of break statement
#include <stdio.h>
int main()
{
 int i;
 for(i=1;i<10;i++)
 {
   if(i%5==0)
     break;
   printf("%d",i);
 }
 printf("OUT");

 return 0;

}
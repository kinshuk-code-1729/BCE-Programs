// Program to print all even numbers from 1 to n using for loop
#include <stdio.h>
int main()
{
 int i,n;
 printf("Enter the value of n : ");
 scanf("%d",&n);
 for(i=2;i<=n;i=i+2)
 {
   printf("%d\n",i);
 }
 return 0;
}
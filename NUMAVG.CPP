// Program to find average of 5 numbers
// developed by kb
// dated : 05/05/21

#include <stdio.h>

int main()
{
  int v,w,x,y,z;
  float s,avg;

  printf("Enter first number : ");
  scanf("%d",&v);
  printf("\nEnter second number :  ");
  scanf("%d",&w);
  printf("\nEnter third numner : ");
  scanf("%d",&x);
  printf("\nEnter fourth number : ");
  scanf("%d",&y);
  printf("\nEnter fifth number : ");
  scanf("%d",&z);
  s=v+w+x+y+z;
  avg=s/5;
  printf("Average of given numbers is : %f",avg);
  return 0;

}
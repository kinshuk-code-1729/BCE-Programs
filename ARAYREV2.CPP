// Program to get elements of array in reverse without using another array
#include <stdio.h>
int main()
{
  int b[5];
  printf("\nEnter five elements for array");
  printf("\nEnter first element : ");
  scanf("%d",&b[0]);
  printf("\nEnter second element : ");
  scanf("%d",&b[1]);
  printf("\nEnter third element : ");
  scanf("%d",&b[2]);
  printf("\nEnter fourth element : ");
  scanf("%d",&b[3]);
  printf("\nEnter fifth element : ");
  scanf("%d",&b[4]);

  printf("\nThe elements of given array in reverse order are :");
  printf("\n%d %d %d %d %d",b[4],b[3],b[2],b[1],b[0]);

  return 0;
}
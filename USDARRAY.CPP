// Program to initialize elements of array by user defined values
#include <stdio.h>
int main()
{
  int k[5];
  printf("\nEnter five elements for array");
  printf("\nEnter first element : ");
  scanf("%d",&k[0]);
  printf("\nEnter second element : ");
  scanf("%d",&k[1]);
  printf("\nEnter third element : ");
  scanf("%d",&k[2]);
  printf("\nEnter fourth element : ");
  scanf("%d",&k[3]);
  printf("\nEnter fifth element : ");
  scanf("%d",&k[4]);

  printf("\nThe elements of array are :");
  printf("\n%d %d %d %d %d",k[0],k[1],k[2],k[3],k[4]);

  return 0;
}
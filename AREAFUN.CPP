// Program to find area of a circle using user defined funtions
#include <stdio.h>
int area()
{
 int r;
 float ar;
 printf("Enter the Radius of circle : ");
 scanf("%d",&r);
 ar=(float)22/7*r*r;
 printf("\nThe area of the circle of radius %d is %f",r,ar);
 return 0;
 }
int main()
{
  area();
  return 0;
}
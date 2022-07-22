// Program to find area of a circle
// Developed by kinshuk
// Date : 04 May 2021

#include <stdio.h>
int main()
{  int r;
   float area;

   printf("Enter the radius of the circle : ");
   scanf("%d",&r);
   area=(float)22/7*r*r;
   printf("\nArea of circle of radius %d is %f",r,area);
   return 0;
}

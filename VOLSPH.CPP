// Program to find volume of sphere
// developed by king
// date 04/05/2021
#include <stdio.h>
int main()
{
  int r;
  float volume;

  printf("Enter the radius of sphere : ");
  scanf("%d",&r);
  volume=(float)4/3*(float)22/7*r*r*r;
  printf("\nVolume of sphere of radius %d is %f",r,volume);
  return 0;
}

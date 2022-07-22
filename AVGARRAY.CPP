//Program to find average of numbers of an integer array
#include <stdio.h>
int main()
{
  int p[5],sum=0,i,avg;
  printf("Enter five elements for array : ") ;
  for(i=0;i<5;i++)
  { scanf("%d",&p[i]);
    sum=sum+p[i];
  }
  avg=sum/5;
  printf("The AVERAGE of five entered numbers is : %d",avg);
  return 0;
}
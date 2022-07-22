// Program to calculate simple interest for a principle amount
// developed by kb
// Date : 05/05/2021
#include <stdio.h>
int main()
{
  int p;
  float r,t,interest;

  printf("Enter Principle Amount : ");
  scanf("%d",&p);
  printf("\nEnter Rate of Interest : ");
  scanf("%f",&r);
  printf("\nEnter Time in years : ");
  scanf("%f",&t);
  interest=(p*r*t)/100;
  printf("The Simple Interest for given principle amount is : %f",interest);
  return 0;
}
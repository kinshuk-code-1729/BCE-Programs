// Program to get elements of an array in reverse order using another array
#include <stdio.h>
int main()
{
  int i,j,x[5],y[5];
  printf("\nEnter five elements for an array");
  for(i=0;i<5;i++)
  {
    printf("\nEnter element %d : ",i+1);
    scanf("%d",&x[i]);
  }
  for(i=4,j=0;i>=0;--i,j++)
  {
    y[j]=x[i];
  }
  printf("\nThe elements of given array in reverse order are : ");
  for(i=0;i<5;++i)
 { printf("%d ",y[i]);
  }
  return 0;
}
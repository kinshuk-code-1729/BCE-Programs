// Program to find a maximum element from given single dimensional array
#include <stdio.h>
int main()
{
  int c[15],i,max,n;
  max=0;
  printf("Enter total no. of elements (max size will be 15) : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter element %d : ",i+1);
    scanf("%d",&c[i]);
  }
  for(i=0;i<n;i++)
  {
    if(max<c[i])
    max=c[i];
  }
  printf("\nThe maximum value is : %d",max);
  return 0;
}

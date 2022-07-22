// Program to search for an element in given integer array
#include <stdio.h>
int main()
{
  int x[20],i,j,m,e;
  printf("Enter the size of array (max. size 20) : ");
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    printf("\nEnter element %d : ",i+1);
    scanf("%d",&x[i]);
  }
  printf("\nEnter any element to be searched : ");
  scanf("%d",&e);
  for(j=0;j<m;j++)
  {
    if(e==x[j])
     { printf("Element found in array at position %d and index %d",j+1,j);
      break;
     }
    }
    if(e!=x[j])
     { printf("Element not found in array");
     }
return 0;
}
// Program to find occurence of an element in given array
#include <stdio.h>
int main()
{
  int x[20],i,j,m,e,count=0;
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
     { count++;
       printf("Element found in array at position %d and index %d\n",j+1,j);
     }
  }
       if(count>0)
       { printf("Element found %d times in the array",count);
       }
       else if(e!=x[j])
    printf("Element not found in the array");

return 0;
}
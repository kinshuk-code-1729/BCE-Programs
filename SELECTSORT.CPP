// Program to arrange the elements of an array using selection sort
#include <stdio.h>
int main()
{
  int a[20],n,i,j,k,t,l;
  printf("Enter the size of array (maximum size 20) : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   { printf("\nEnter element %d : ",i+1);
     scanf("%d",&a[i]);
   }
  printf("\nInitially the elements of array are : ");
  for(i=0;i<n;i++)
   { printf("%d ",a[i]);
   }
  for(j=0;j<n-1;j++)
  {
      l=j;
      for(k=j+1;k<n;k++)
      {
          if(a[k]<a[l])
          {
              l=k;
          }
      }
      t=a[j];
      a[j]=a[l];
      a[l]=t;
  }
  printf("\nThe elements of array after sorting are : ");
 for(i=0;i<n;i++)
 { printf("%d ",a[i]);
 }
 return 0;
}

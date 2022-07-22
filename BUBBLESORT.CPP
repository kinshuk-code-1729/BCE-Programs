// Program to arrange the elements of an array in ascending order using bubble sort
#include <stdio.h>
int main()
{
 int a[10],n,i,j,k,t;
 printf("Enter the size of array (maximum size 10) : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { printf("\nEnter element %d : ",i+1);
   scanf("%d",&a[i]);
 }
 printf("\nInitially the elements of array are : ");
 for(i=0;i<n;i++)
 { printf("%d ",a[i]);
 }
 for(k=0;k<n;k++)
 {
  for(j=0;j<n-1;j++)
  {if (a[j]>a[j+1])
 { t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
  }
  }
 }
 printf("\nThe elements of array after sorting are : ");
 for(i=0;i<n;i++)
 { printf("%d ",a[i]);
 }
return 0;
}

// Program to find multiplication of two matrices
#include <stdio.h>
int main()
{
 int x[3][3],y[3][3],z[3][3],i,j,k,sum;
 printf("\nEnter the elements of matrix 1 : ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     scanf("%d",&x[i][j]);
     }
  }
  printf("\nEnter the elements of matrix 2 : ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     scanf("%d",&y[i][j]);
     }
  }
  for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
    { sum=0;
      for(k=0;k<3;k++)
       { sum = sum+x[i][k]*y[k][j];
	 z[i][j]=sum;
       }
    }
 }
 printf("\nThe Multiplication of the given matrices is : \n");
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
  printf("%d ",z[i][j]);
  }
return 0;
 }
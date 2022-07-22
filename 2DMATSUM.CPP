// Program to get addition of 2 two-dimensional matrices
#include <stdio.h>
int main()
{
  int p[3][3],q[3][3],r[3][3],i,j;
  printf("\nEnter the elements of matrix 1 : ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     scanf("%d",&p[i][j]);
     }
  }
  printf("\nEnter the elements of matrix 2 : ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     scanf("%d",&q[i][j]);
     }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     r[i][j]=p[i][j]+q[i][j];
    }
  }
 printf("The elements of 1st matrix are : \n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
    printf("%d\t",p[i][j]);
    }
   printf("\n") ;
 }
 printf("The elements of 2nd matrix are : \n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
    printf("%d\t",q[i][j]);
    }
   printf("\n") ;
 }
 printf("The sum of both the matrices is : \n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
    printf("%d\t",r[i][j]);
    }
   printf("\n") ;
 }
 return 0;
 }
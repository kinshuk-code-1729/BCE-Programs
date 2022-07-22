//Program to display prime numbers from 1 to n
#include <stdio.h>
int main()
{
  int n,i,j;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  printf("The prime numbers from 1 to %d are :",n);
  for(j=2;j<=n;j++)
    { for(i=2;i<j;i++)
       {
	if(j%i==0)
	break;
       }
	if(i==j)
	  {
	   printf(" %d ",i);
	   }
    }

    return 0;
}

// Program to find largest number among five numbers
#include <stdio.h>

int main()
{
   int v,w,x,y,z;
   printf("Enter first number : ");
   scanf("%d",&v);
   printf("Enter second number : ");
   scanf("%d",&w);
   printf("Enter third number : ");
   scanf("%d",&x);
   printf("Enter fourth number : ");
   scanf("%d",&y);
   printf("Enter fifth number : ");
   scanf("%d",&z);
   if (v>w)
    {if (v>x)
      {if (v>y)
       {if (v>z)
	 printf("%d is greatest",v);
	else
	 printf("%d is greatest",z);
	}
	else
	 {if(y>z)
	  printf("%d is greatest",y);
	  else
	  printf("%d is greatest",z);
	  }
	}
       else
	 {if (x>y)
       {if (x>z)
	 printf("%d is greatest",x);
	else
	 printf("%d is greatest",z);
	}
	else
	 {if(y>z)
	  printf("%d is greatest",y);
	  else
	  printf("%d is greatest",z);
	  }
	 }
       }
      else
       {if (w>x)
	 {if (w>y)
       {if (w>z)
	 printf("%d is greatest",v);
	else
	 printf("%d is greatest",z);
	}
	else
	 {if(y>z)
	  printf("%d is greatest",y);
	  else
	  printf("%d is greatest",z);
	  }
	}
	else
	{if (x>y)
       {if (x>z)
	 printf("%d is greatest",x);
	else
	 printf("%d is greatest",z);
	}
	else
	 {if(y>z)
	  printf("%d is greatest",y);
	  else
	  printf("%d is greatest",z);
	  }
	}
      }
 return 0;
 }
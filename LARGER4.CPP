// Program to find larger from four numbers
#include <stdio.h>

int main()
{
  int w,x,y,z;
  printf("Enter first number : ");
  scanf("%d",&w);
  printf("Enter second number : ");
  scanf("%d",&x);
  printf("Enter third number : ");
  scanf("%d",&y);
  printf("Enter fourth number : ");
  scanf("%d",&z);
  if (w>x)
   {if (w>y)
     {if (w>z)
       { printf("%d is greatest",w);
       }
      else
       { printf("%d is greatest",z);
       }
      }
      else
      { if(y>z)
	{ printf("%d is greatest",y);
	}
	else
	{ printf("%d is greatest",z);
	}
       }
     }
     else
     { if (x>y)
       { if (x>z)
	  { printf("%d is greatest",x);
	  }
	  else
	  { printf("%d is greatest",z);
	  }
       }
       else
       { if (y>z)
	 { printf("%d is greatest",y);
	 }
	 else
	 { printf("%d is greatest",z);
	 }
       }
     }
   return 0;
  }
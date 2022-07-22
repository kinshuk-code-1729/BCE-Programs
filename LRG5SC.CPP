// Program to find a greater number from different numbers using switch case statement
#include <stdio.h>
int main()
{ int a,b,c,d,e;
  printf("Enter 1st number : ");
  scanf("%d",&a);
  printf("\nEnter 2nd number : ");
  scanf("%d",&b);
  printf("\nEnter 3rd number : ");
  scanf("%d",&c);
  printf("\nEnter 4th number : ");
  scanf("%d",&d);
  printf("\nEnter 5th number : ");
  scanf("%d",&e);
  switch(a>b)
  {case 1:switch(a>c)
   {case 1:switch(a>d)
    {case 1:switch(a>e)
     {case 1:printf("%d is greatest",a);
      break;
      case 0:printf("%d is greatest",e);
     }
     break;
     case 0:switch(c>d)
     {case 1:switch(c>e)
      {case 1:printf("%d is greatest",c);
       break;
       case 0:printf("%d is greatest",e);
      }
      break;
      case 0:switch(d>e)
      {case 1:printf("%d is greatest",d);
       break;
       case 0:printf("%d is greatest",e);
      }
     }
    }
   break;
   case 0:switch(b>c)
   {case 1:switch(b>d)
    {case 1:switch(b>e)
     {case 1:printf("%d is greatest",b);
      break;
      case 0:printf("%d is greatest",e);
     }
     break;
     case 0:switch(d>e)
     {case 1:printf("%d is greatest",d);
      break;
      case 0:printf("%d is greatest",e);
     }   
   }
    break;
    case 0:switch(c>d)
    {case 1:switch(c>e)
     {case 1:printf("%d is greatest",c);
      break;
      case 0:printf("%d is greatest",e);
     }
    break;
 case 0:switch(d>e)
 {case 1:printf("%d is greatest",d);
  break;
  case 0:printf("%d is greatest",e);
     }
    }  
   } 
  }
  return 0;
}
}
// Program to find larger between 4 numbers using switchcase statement
#include <stdio.h>
int main()
{
	int w,x,y,z;
	printf("Enter First Number : ");
	scanf("%d",&w);

	printf("\nEnter Second Number : ");
	scanf("%d",&x);

	printf("\nEnter Third Number : ");
    scanf("%d",&y);

    printf("\nEnter Fourth Number : ");
	scanf("%d",&z);
switch(w==x)
{ case 1:printf("\nThe first two numbers are equal");
  break;
}
switch(w==y)
{ case 1:printf("\nBoth first and third numbers are equal");
  break;
}
switch(w==z)
{ case 1:printf("\nBoth first and fourth numbers are equal");
  break;
}
switch(x==y)
{ case 1:printf("\nBoth second and third numbers are equal");
  break;
}
switch(x==z)
{ case 1:printf("\nBoth second and fourth numbers are equal");
break;
}
switch(y==z)
{ case 1:printf("\nBoth third and fourth numbers are equal");
break;
}
switch(w>x)
{ case 1:switch(w>y)
         { case 1:switch(w>z)
                  { case 1:printf("\n%d is the greatest number",w);
                    break;
                    case 0:printf("\n%d is the greatest number",z);
                    break;
				  }
           break;
           case 0:switch(y>z)
                  { case 1:printf("\n%d is the greatest number",y);
                    break;
                    case 0:printf("\n%d is the greatest number",z);
                    break;
				  }
           break;
		 }
  break;
  case 0:switch(x>y)
         { case 1:switch(x>z)
                  { case 1:printf("\n%d is the greatest number",x);
                  	break;
                  	case 0:printf("\n%d is the greatest number",z);
                  	break;
				  }
           break;
           case 0:switch(y>z)
                  { case 1:printf("\n%d is the greatest number",y);
                    break;
                    case 0:printf("\n%d is the greatest number",z);
                    break;
				  }
           break;
         }
    break;
}
return 0;
}

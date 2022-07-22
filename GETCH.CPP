// Program to show the working of getch() function
#include <stdio.h>
#include <conio.h>

int main()
{
  char ch;

  printf("\nEnter a character : ");
  ch=getch();    // FOR getche use " ch = getche() 
  printf("\nEntered character is : %c",ch);

  return 0;
}
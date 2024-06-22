#include<stdio.h>
#include<conio.h>
union un{
  int mem1;
  char mem2;
  float mem3;

  };
  // driver code
  void main () {
   union un var1;
   var1.mem1=15;
   var1.mem2='c';
   clrscr();
   printf("The Value Stored in Member1 = %d",var1.mem1);
    printf("\nThe Value Stored in Member1 = %c",var1.mem2);


  getch();
  }
#include <stdio.h>

int main()
{

   int i, sum;
   sum = 0;
   for (i=0; i<10; i++);
      sum = sum + i;
   if (i < 5)
      sum = sum + i;
   else
      sum = sum + ((i-3)/2+(i/3));
   printf("Lecture1a: sum = %d\n", sum);


   /*
   1. COMMAND IS USED TO EXECUTE THE ABOVE CODE ON WINDOWS IN VSCODE
   .\Lecture1a.exe
   2.
   gdb
   */
}
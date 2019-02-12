// program to print numbers 1 to 10 and their squares
#include <stdio.h>


int
main (void)
{


  for (int i = 1; i <= 10; i++) //iterates i from 1 to 10
    {
    
    
      int iSQ = i * i; //calculates square of i
      printf ("%d\t%d\n", i, iSQ); //prints i and its square



    }



  return 0;
}

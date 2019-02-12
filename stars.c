// prints a right triangle made of *. Dimensions: h=10, base=10
#include <stdio.h>

int
main ()
{

  for (int i = 1; i <= 10; i++)
    {
      for (int j = 1; j <= i; j++)
	{


	  printf ("*"); // prints a number of stars based on which row it is


	}
      printf ("\n"); // prints a new line between rows of stars

    }

  return 0;
}

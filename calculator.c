// Calculator that can handle x,/,+,- operators and two operands 

#include <stdio.h>


int
main (void)
{
  printf ("Hello World");


  char operator, operandType;
  int step1Valid = 0, step2Valid = 0;

  // step 1: choose operator


  while (step1Valid == 0)
    {

      printf
	("\nChoose Valid Operator: a (addition), s (subtraction), m (multiplication), d (division), q (quit)\n");
      scanf (" %c", &operator);

      // exits program if q is inputted
      if (operator == 'q')
	{
	  printf ("\nQuitting Program...");
	  exit (0);
	}

      // checks validity
      if (operator == 'a' || operator == 's' || operator == 'm'
	  || operator == 'd')
	{
	  step1Valid = 1;
	}

    }

  //step 2: choose type of operands
  while (step2Valid == 0)
    {
      printf ("\nChoose Valid Type of Operand: f (float), i (int)\n");
      scanf (" %c", &operandType);


      // checks validity
      if (operandType == 'f' || operandType == 'i')
	{
	  step2Valid = 1;
	}



    }

  //step 3: receive operands 
  if (operandType == 'f') //Finds result if operand type is float
    {
      float result, operand1, operand2;
      printf ("\nEnter first operand\n");
      scanf ("%f", &operand1);
      printf ("\nEnter second operand\n");
      scanf ("%f", &operand2);


      if (operator == 'm')
	{
	  result = operand1 * operand2;
	}
      if (operator == 'd')
	{
	  result = operand1 / operand2;
	}
      if (operator == 'a')
	{
	  result = operand1 + operand2;
	}
      if (operator == 's')
	{
	  result = operand1 - operand2;
	}
      printf ("Result: %f", result);

    }
  else //Finds result if operand type is integer
    {
      int result, operand1, operand2;
      printf ("\nEnter first operand\n");
      scanf ("%d", &operand1);
      printf ("\nEnter second operand\n");
      scanf ("%d", &operand2);

      if (operator == 'm')
	{
	  result = operand1 * operand2;
	}
      if (operator == 'd')
	{
	  result = operand1 / operand2;
	}
      if (operator == 'a')
	{
	  result = operand1 + operand2;
	}
      if (operator == 's')
	{
	  result = operand1 - operand2;
	}

      printf ("Result: %d", result);
    }





  return 0;
}

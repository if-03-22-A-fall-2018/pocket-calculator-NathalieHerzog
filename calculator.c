/***************************************************
 * Nr:	   	       2
 * Programname:	  pocket-calculator
 * Author:	     	Nathalie Herzog
 * Class:	      	2AHIF
 * Date:		      9.10.
 * -------------------------------------------------
 * What's it about:
 * Basic Calculator
 * *************************************************
*/

#include <stdio.h>
#include <float.h>

void operands(double* num1, double* num2);
void add(double num1, double num2, double result);
void subtract(double num1, double num2, double result);
void multiply(double num1, double num2, double result);
void division(double num1, double num2, double result);

int main(int* choice)
 {
  printf("Choose one of the following operations:\n" );
  printf("Add ............. 1\n" );
  printf("Subtract ........ 2\n" );
  printf("Multiply ........ 3\n" );
  printf("Divide .......... 4\n" );
  printf("Stop Porgram ... -1\n" );
  printf("Enter your choice: ");
  scanf("%d", choice );

  while(*choice < -1 || *choice == 0 || *choice > 4)
  {
    printf("Input not allowed, please try again");
    printf("Enter your choice: ");
    scanf("%d", choice );
  }
}

void operands(double* num1, double* num2)
{
  printf("Please enter the first operand: ");
  scanf("%lf",num1);
  printf("Please enter the second operand: ");
  scanf("%lf",num2);
}

void run(double num1, double num2, int choice, double result)
{
  switch(choice)
  {
    case -1:
        break;

    case 1:
      add(num1, num2, result);
      break;

    case 2:
      subtract(num1, num2, result);
      break;

    case 3:
      multiply(num1, num2, result);
      break;

    case 4:
      divide(num1, num2, result);
      break;
  }

}

void add(double num1, double num2, double result)
{
    if((num1 > 0) && (num2 > 0) && ((DBL_MAX - num1) < num2))
    {
      printf("Number overflow\n");
    }
    else if((num1 < 0) && (num2 < 0) && ((DBL_MIN - num1) > num2))
    {
      printf("Number underflow\n");
    }
    else
    {
    result = num1 + num2;
    printf("Result: %lf",result);
    }
}

void subtract(double num1, double num2, double result)
{
  if((num1 > 0) && (num2 > 0) && ((DBL_MAX - num1) < num2))
  {
    printf("Number overflow\n");
  }
  else if((num1 < 0) && (num2 < 0) && ((DBL_MIN - num1) > num2))
  {
    printf("Number underflow\n");
  }
  else
  {
  result = num1 - num2;
  printf("Result: %lf",result);
  }
}

void multiply(double num1, double num2, double result)
{
  if((num1 > 0) && (num2 > 0) && ((DBL_MAX - num1) < num2))
  {
    printf("Number overflow\n");
  }
  else if((num1 < 0) && (num2 < 0) && ((DBL_MIN - num1) > num2))
  {
    printf("Number underflow\n");
  }
  else
  {
  result = num1 * num2;
  printf("Result: %lf",result);
  }
}

void divide(double num1, double num2, double result)
{
  if((num1 > 0) && (num2 > 0) && ((DBL_MAX - num1) < num2))
  {
    printf("Number overflow\n");
  }
  else if((num1 < 0) && (num2 < 0) && ((DBL_MIN - num1) > num2))
  {
    printf("Number underflow\n");
  }
  else if(num1 == 0 || num2 == 0)
  {
    printf("Division by Zero");
  }
  else
  {
  result = num1 / num2;
  printf("Result: %lf",result);
}
}

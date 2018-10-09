#include <stdio.h>
#include <float.h>

void Operands(double* num1, double* num2);
void Add(double num1, double num2, double* result);
void Subtract(double num1, double num2, double* result);
void Multiply(double num1, double num2, double* result);
void Division(double num1, double num2, double* result);

int Main(int* choice)
 {
  printf("Choose one of the following operations:" );
  printf("Add ............. 1" );
  printf("Subtract ........ 2" );
  printf("Multiply ........ 3" );
  printf("Divide .......... 4" );
  printf("Stop Porgram ... -1" );
  printf("Enter your choice: ");
  scanf("%d", &choice );

  while(choice < -1 || choice == 0 || choice > 4)
  {
    printf("Input not allowed, please try again");
    printf("Enter your choice: ");
    scanf("%d", &choice );
  }
}

void Operands(double* num1, double* num2)
{
  printf("Please enter the first operand: ");
  scanf("%lf", &num1 );
  printf("Please enter the second operand: ");
  scanf("%lf", &num2 );
}

void Switch(double* num1, double* num2, int* choice)
{
  switch(*choice)
  {
    case 1:
      Add(&num1, &num2);
      break;

    case 2:
      Subtract(&num1, &num2);
      break;

    case 3:
      Multiply(&num1, &num2);
      break;

    case 4:
      Division(&num1, &num2);
      break;
  }
}

void Add(double num1, double num2, double* result)
{
    if((num1 > 0) && (num2 > 0) && ((DBL_MAX - num1) < num2))
    {
      printf("Number overflow\n");
    }
    else if((num1 < 0) && (num2 < 0) && ((DBL_MIN - num1) > num2))
    {
      printf("Number underflow\n");
    }
    *result = x + y;
}

void Subtract(double num1, double num2, double* result)
{
  *result = x - y;
}

void Multiply(double num1, double num2, double* result)
{
  *result = x * y;
}

void Divide(double num1, double num2, double* result)
{
  if(x == 0 || y == 0)
  {
    printf("Division by Zero");
  }
  *result = x / y;

  printf("Result: %lf",result)
}

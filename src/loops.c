#include <stdio.h>

unsigned long long factorial(unsigned);
void print_fibonacci(unsigned);

unsigned long long factorial(unsigned number)
{
  unsigned long long fact = 1;
  unsigned num;
  
  for(num = number; num > 0; num--)
  {
    fact *= num;
  }

  return fact;
}

void print_fibonacci(unsigned number)
{
  unsigned term1 = 0, term2 = 1, count, sum;

  for(count = 0; count < number; count++)
  {
    printf("%d ", term1);
    sum = term1 + term2;
    term1 = term2;
    term2 = sum;
  }
}

int main(void)
{
  unsigned number;

  printf("1. Factorial\n");
  printf("Enter a Numbers: ");
  scanf("%u", &number);
  printf("factorial(%u): %llu\n\n", number, factorial(number));

  printf("2. Fibonacci\n");
  printf("Enter a Count: ");
  scanf("%d", &number);
  print_fibonacci(number);
  printf("\n\n");

  return 0;
}
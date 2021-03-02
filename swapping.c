#include<stdio.h>
int main() {
      double a, b, c;
      printf("Enter first number: ");
      scanf("%lf", &a);
      printf("Enter second number: ");
      scanf("%lf", &b);

      // Value of first is assigned to temp
       a = b;

      // Value of second is assigned to first
      b = c;

      // Value of temp (initial value of first) is assigned to second
      c = a;

      printf("\nAfter swapping, firstNumber = %.2lf\n", a);
      printf("After swapping, secondNumber = %.2lf", b);
      return 0;
}
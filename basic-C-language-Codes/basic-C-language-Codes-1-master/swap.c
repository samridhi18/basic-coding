//Without using Temporarry variable
#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("After swapping, a = %.2lf\n", a);
    printf("After swapping, b = %.2lf", b);
    return 0;
}



//using a temporary variable
#include<stdio.h>
int main() {
      double first, second, temp;
      printf("Enter first number: ");
      scanf("%lf", &first);
      printf("Enter second number: ");
      scanf("%lf", &second);
     temp = first;
     first = second;
     second = temp;
      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf", second);
      return 0;
}

// Arithmetic Calculation
#include <stdio.h>

int main() {
  // Vairables
  int num1, num2;
  int addition, subraction, multiplication, division;
  // Instructions
  printf("Arithmetic Calcualtion \n");
  printf("Enter First Number: ");
  scanf("%d", &num1);
  printf("Enter Second Number: ");
  scanf("%d", &num2);
  // Output
  addition = num1 + num2;
  subraction = num1 - num2;
  multiplication = num1 * num2;
  division = num1 / num2;
  printf("Addition = %d \n", addition);
  printf("Subraction = %d \n", subraction);
  printf("Mulitplication  = %d \n", multiplication);
  printf("Division = %d \n", division);
  return 0;
}

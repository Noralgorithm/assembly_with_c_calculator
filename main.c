#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addition(int, int);
int substraction(int, int);
int multiplication(int, int);
int division(int, int);
int power(int, int);

int signed_division(int x, int y) {
  int division_result = division(abs(x), abs(y));
  if ((x > 0 && y > 0) || (x < 0 && y < 0)) return division_result;
  return -division_result;
}

int validated_power(int x, int y) {
  if (y == 0) return 1;
  if (y < 0) return 0;
  return power(x,y);
}

int main(int argc, char *argv[]) {

  if (strcmp(argv[1], "add") == 0) {
    printf("%d", addition(atoi(argv[2]),atoi(argv[3])));
  } else if (strcmp(argv[1], "sub") == 0) {
    printf("%d", substraction(atoi(argv[2]),atoi(argv[3])));
  } else if (strcmp(argv[1], "mul") == 0) {
    printf("%d", multiplication(atoi(argv[2]),atoi(argv[3])));
  } else if (strcmp(argv[1], "div") == 0) {
    printf("%d", signed_division(atoi(argv[2]),atoi(argv[3])));
  } else if (strcmp(argv[1], "pow") == 0) {
    printf("%d", validated_power(atoi(argv[2]),atoi(argv[3])));
  } 

  return 0;
}
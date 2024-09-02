#include <stdio.h>

int main() {
  float fahr;
  int celsius;

  int lower = -20;
  int upper = 160;

  printf("%4s %6s\n", "C", "F");
  puts("---- ------");

  for (celsius = lower; celsius <= upper; celsius += 10) {
    fahr = (celsius * 9.0 / 5.0) + 32;
    printf("%4d %6.1f\n", celsius, fahr);
  }
}

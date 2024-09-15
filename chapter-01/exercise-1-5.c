#include <stdio.h>

int main() {
  int fahr;
  float celsius;

  int lower = 0;
  int upper = 300;

  printf("%4s %6s\n", "F", "C");
  puts("---- ------");

  for (fahr = upper; fahr >= lower; fahr -= 20) {
    celsius = (fahr - 32.0) * 5.0 / 9.0;
    printf("%4d %6.1f\n", fahr, celsius);
  }
}

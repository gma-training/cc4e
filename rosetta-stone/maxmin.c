#include <stdio.h>

int main() {
  int first = 1;
  int value, max, min;

  while(scanf("%d", &value) != EOF) {
    if (first || value > max) max = value;
    if (first || value < min) min = value;
    first = 0;
  }

  printf("Maximum value: %d\n", max);
  printf("Minimum value: %d\n", min);
}

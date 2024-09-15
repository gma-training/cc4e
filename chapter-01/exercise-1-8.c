#include <stdio.h>

int main() {
  int c;

  while((c = getchar()) != EOF) {
    if (c == '\t')
      printf(">\b-");
    else if (c == '\b')
      printf("<");
    else
      putchar(c);
  }

  return 0;
}

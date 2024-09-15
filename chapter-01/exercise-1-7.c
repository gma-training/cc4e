#include <stdio.h>

int main() {
  int c;
  int previous = EOF;

  char deduped = ' ';

  while ((c = getchar()) != EOF) {
    if (c == deduped && previous == deduped)
      continue;
    putchar(c);
    previous = c;
  }

  return 0;
}

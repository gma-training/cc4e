#include <stdio.h>

#define YES 1
#define NO  0

int main() {
  int c, inword;

  inword = YES;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (inword)
        putchar('\n');
      inword = NO;
    }
    else {
      inword = YES;
      putchar(c);
    }
  }

  return 0;
}

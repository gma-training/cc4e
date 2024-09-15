#include <stdio.h>

int main() {
  int tabs = 0;
  int spaces = 0;
  int lines = 0;

  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      tabs++;
    if (c == ' ')
      spaces++;
    if (c == '\n')
      lines++;
  }

  printf("Tabs: %d, Spaces: %d, New lines: %d\n", tabs, spaces, lines);

  return 0;
}

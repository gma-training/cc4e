#include <stdio.h>

int main() {
  int usf, euf;
  printf("Enter US floor\n");
  scanf("%d", &usf);
  euf = usf - 1;
  printf("I think you meant floor %d, pal\n", euf);
}

#include <stdio.h>

int main() {
  char name[41];
  printf("What's your name?\n");
  scanf("%40s", name);
  printf("Hello %s\n", name);
}

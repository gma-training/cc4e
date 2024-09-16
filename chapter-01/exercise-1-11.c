#include <stdio.h>

#define YES 1
#define NO  0

int is_letter(char c) {
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int is_digit(char c) {
  return c >= '0' && c <= '9';
}

int main() /* count lines, words, chars in input */
{
  int c, nl, nw, nc, inword;

  inword = NO;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n' )
      ++nl;
    if (inword && ! (is_letter(c) || is_digit(c) || c == '\''))
      inword = NO;
    else if (inword == NO && is_letter(c)) {
      inword = YES;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

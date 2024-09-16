#include <ctype.h>
#include <stdio.h>

#define YES 1
#define NO  0

int main() /* count lines, words, chars in input */
{
  int c, nl, nw, nc, inword;

  inword = NO;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n' )
      ++nl;
    if (inword && ! (isalnum(c) || c == '\''))
      inword = NO;
    else if (inword == NO && isalpha(c)) {
      inword = YES;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

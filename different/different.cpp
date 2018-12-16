#include <stdio.h>

int main(int argc, char **argv) {
  unsigned long a, b;

  while (scanf("%lu %lu", &a, &b) == 2) {
    if (b > a) printf("%ld\n", b - a);
    else printf("%ld\n", a - b);
  }

  return 0;
}

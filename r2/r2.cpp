#include <stdio.h>

int main(int argc, char **argv) {
  int r1, s;
  if (scanf("%d %d", &r1, &s) < 0) {
    fprintf(stderr, "error reading n, p\n");
  }

  int r2 = (2 * s) - r1;
  printf("%d\n", r2);

  return 0;
}

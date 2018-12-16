#include <stdio.h>

int main(int argc, char **argv) {
  int n, p;
  if (scanf("%d %d", &n, &p) < 0) {
    fprintf(stderr, "error reading n, p\n");
    return 1;
  }

  printf("%d\n", p);
  return 0;
}

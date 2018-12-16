#include <stdio.h>

int main(int argc, char **argv) {
  int n;
  if (scanf("%d", &n) < 0) {
    fprintf(stderr, "error reading n\n");
    return 1;
  }

  int x;
  for (int i=0; i<n; i++) {
    if (scanf("%d", &x) < 0) {
      fprintf(stderr, "error reading x\n");
      return 1;
    }

    if (x % 2 == 0) printf("%d is even\n", x);
    else printf("%d is odd\n", x);
  }

  return 0;
}

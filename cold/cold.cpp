#include <stdio.h>

int main(int argc, char **argv) {
  int n;
  if (scanf("%d", &n) < 0) {
    fprintf(stderr, "error reading n\n");
  }

  int t;
  int c = 0;
  for (int i=0; i<n; i++) {
    if (scanf("%d", &t) < 0) {
      fprintf(stderr, "error reading t\n");
      return 1;
    }

    if (t < 0) c += 1;
  }

  printf("%d\n", c);

  return 0;
}

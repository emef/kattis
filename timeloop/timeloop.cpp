#include <stdio.h>

int main(int argc, char **argv) {
  int n;
  if (scanf("%d", &n) < 0) {
    fprintf(stderr, "error reading n\n");
  }

  for (int i=1; i<=n; i++) {
    printf("%d Abracadabra\n", i);
  }

  return 0;
}

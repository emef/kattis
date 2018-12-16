#include <stdio.h>

int main(int argc, char **argv) {
  int n;
  if (scanf("%d", &n) < 0) {
    fprintf(stderr, "error reading n\n");
  }

  if (n % 2 == 0) printf("Bob\n");
  else printf("Alice\n");

  return 0;
}

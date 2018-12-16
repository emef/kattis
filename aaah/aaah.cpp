#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char buf[1001];
  int a, b;

  if (scanf("%s", buf) < 0) {
    fprintf(stderr, "error reading a\n");
  }

  a = strlen(buf);

  if (scanf("%s", buf) < 0) {
    fprintf(stderr, "error reading b\n");
  }

  b = strlen(buf);

  if (a < b) printf("no\n");
  else printf("go\n");

  return 0;
}

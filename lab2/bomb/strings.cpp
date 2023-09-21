#include <iostream>
using namespace std;
int main() {
  int t;
  char ans[100];
  char *c;
  while (scanf("%s", ans) != EOF) {
    t = strtol(ans, &c, 16);
    putchar(t);
  }
  putchar('\0');
  putchar('\n');
  return 0;
}
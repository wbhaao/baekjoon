#include <stdio.h>

int main() {
  int a, s = 0;
  scanf("%d", &a);
  int min = 100;
  int max = 0;
  for (int i = 0; i < a; i++) {
    scanf("%d", &s);
    if (s > max) {
      max = s;
    }
    if (s < min) {
      min = s;
    }
  }
  printf("합: %d", max + min);

  return 0;
}
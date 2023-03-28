#include <stdio.h>

int main() {
  // a:입력받을 값의 수
  // s: 입력받을 값
  int a, s = 0;
  scanf("%d", &a);
  // min: 가장 작은 값 ). 100을 넣어서 무조건 작은 값 있게 함
  // min: 가장 작은 값 ). 0  을 넣어서 무조건 큰   값 있게 함
  int min = 100;
  int max = 0;
  // 받은 값 수만큼 반복
  for (int i = 0; i < a; i++) {
    scanf("%d", &s);
    // 입력받은게 max보다 크면 바꿈
    if (s > max) {
      max = s;
    }
    // 입력받은게 min보다 작으면 바꿈
    if (s < min) {
      min = s;
    }
  }
  printf("차: %d", max - min);

  return 0;
}
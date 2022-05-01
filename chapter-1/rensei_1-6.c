#include <stdio.h>

int main(void) {
  int n;
  printf("整数を入力してください：");
  scanf("%d", &n);

  printf("その数の5倍は%dです。\n", n * 5);
  return 0;
}

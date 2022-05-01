#include <stdio.h>

int main(void) {
  int n1, n2, ans;

  printf("2つの整数を入力してください。\n");

  printf("整数n1：");
  scanf("%d", &n1);
  printf("整数n2：");
  scanf("%d", &n2);

  ans = n1 * n2;

  printf("それらの積は%dです。\n", ans);
  return 0;
}

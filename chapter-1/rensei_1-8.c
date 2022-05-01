#include <stdio.h>

int main(void) {
  int n1, n2;
  int c = 3;
  int t;

  puts("2つの整数を入力してください。");
  printf("整数１："); scanf("%d", &n1);
  printf("整数２："); scanf("%d", &n2);

  t = 2 * c * (n1 + n2);

  printf("それらの和を6倍すると%dです。\n", t);
  return 0;
}

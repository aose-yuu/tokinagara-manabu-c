#include <stdio.h>

int main(void) {
  int n1, n2, n3, total;
  printf("整数を入力してください。\n");
  printf("整数1："); scanf("%d", &n1);
  printf("整数2："); scanf("%d", &n2);
  printf("整数3："); scanf("%d", &n3);

  total = n1 * n2 * n3;
  
  printf("それらを掛け合わせた値は%dです。\n", total);
  return 0;
}

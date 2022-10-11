#include <stdio.h>

int main(void) {
  int y[2], x[2], rise, run;
  for(int i = 0; i < 2; i++){
    printf("Put what Y%d is", i + 1);
    scanf("%d", &y[i]);
  }
  for(int i = 0; i < 2; i++){
    printf("Put what X%d is", i + 1);
    scanf("%d", &x[i]);
  }
  rise = x[1] - x[0];
  run = y[1] - y[0];
  printf("m = %d/%d", rise, run);
  return 0;
}
#include <stdio.h>
// i was told to comment my code soo...

int main(void) {
  // declare all terms used in formula
  int y[2], x[2], rise, run;
  for(int i = 0; i < 2; i++){
    printf("Put what Y%d is ", i + 1);
    scanf("%d", &y[i]);
  }
  for(int i = 0; i < 2; i++){
    printf("Put what X%d is ", i + 1);
    scanf("%d", &x[i]);
  }
  // do mathings
  rise = x[1] - x[0];
  run = y[1] - y[0];
  printf("m = %d/%d\n", rise, run);
  printf("Simplifying...\n");
  // uses modulo operations to see if the answer can be simplfied
  while(run % 2 == 0 && rise % 2 == 0){
    run = run/2;
    rise = rise/2;
  }
  printf("m = %d/%d\n", rise, run);
  return 0;
}
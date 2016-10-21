#include <stdio.h>


int main(void) {
  int start, end, num;
  start = 1;
  end = 10;
  
  for(num = start; num < end; ++num) {
    printf("  %d", num);
  }
  puts("");

  for(num = start; num < end; ++num) {
    printf(" %d\n", num);
  }


}
#include <stdio.h>
#include <stdlib.h>

int main() {

  fprintf(stderr, "pipe 1 sending numbers to pipe 2\n");

  for (int i = 2; i <= 100; i++) {

    printf("%d\n", i);

  }

  printf("%d\n",-1);
  fprintf(stderr, "sending end\n");
  
}
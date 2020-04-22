#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void n (void) {
  char str[512];

  fgets(str, 512, stdin);
  printf(str) ;
  exit(1);
}

void o (void) {
  system("/bin/sh");
  exit(1);
}

void main(void) {
  n();
  return;
}
level5@RainFall:/tmp/test$

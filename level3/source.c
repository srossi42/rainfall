#include <stdio.h>
#include <unistd.h>

int g_var = 0

void v (){
  char str[512];

  fgets(str, 512, stdin);
  printf(str);
  if (g_var == 64) {
    fwrite("Wait what?!\n", 1, 12, stdout);
    system("/bin/sh");
  }
  return;
}

void main() {
  return (v());
}

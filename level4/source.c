#include <stdio.h>
#include <unistd.h>

int g_var = 0;

void p (char *str) {
   printf(str);
   return;
}

void n (void) {
   char str[512];

   fgets(str, 512, stdin);
   p(str);
   if (g_var == 0x1025544) {
      system("/bin/cat /home/user/level5/.pass");
   }
   return ;
}

void main(void) {
   n();
   return;
}

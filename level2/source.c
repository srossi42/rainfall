#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void p(void){
	char buf[76];
  void *ptr;

  fflush(stdout);
  gets(buf);
  ptr = __builtin_return_address(0);
  if (((unsigned int)ptr & 0xb0000000) == 0xb0000000) {
   printf("%p\n", ptr);
   exit(1);
 }
 puts(buf);
 return (strdup(buf));
}

void main(void){
  return (p());
}

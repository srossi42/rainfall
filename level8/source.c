#include <stdio.h>
#include <stdlib.h>

char *auth = NULL;
char *service = NULL;

main () {

   char buf[128];

   while(1) {

      printf("%p, %p \n", auth, service);

      if (!fgets(buf, 128, stdin))
         break;

      if (strncmp(buf, "auth ", 5) == NULL {
         auth = malloc(4);
         auth[0] = '\0'
         if ((strlen(buf + 5) - 1) < 30) {
           strcpy(auth, buf + 5)
        }
      }
      
      if (strncmp(buf, "reset", 5) == NULL 
         free(auth);

      if (strncmp(buf, "service", 6) == NULL
         service = strdup(buf + 7);

      if (strncmp(buf, "login", 5) == NULL {
         if (auth[32] == '\0')
            fwrite("Password:\n", 1, 10, stdout);
         else
            system("/bin/sh");
      }
   }
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void m() {
        printf("%s - %d\n", str, (int)time(0));
}

int main (int argc, char **argv) {
        char *str1;
        char *str2;
        int *fd;

        str1 = malloc(8);
        *str1 = 1;
        str1[1] = malloc(8);

        str2 = malloc(8);
        *str2 = 2;
        str2[1] = malloc(8);
        strcpy(str1, (char *)argv[1]);
        strcpy(str2, (char *)argv[2]);
        fd = fopen("/home/user/level8/.pass", "r");
        fgets(str, 68, fd);
        puts("~~");
        return 0
}
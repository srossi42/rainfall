int main(int argc, char **argv) {
   int i;
   char buf[40];

   i = atoi(argv[1]);
   
   if (i <= 9) {
      
      memcpy(buf, argv[2], i*4);
      
      if (buf == 1464814662) {
         execl("/bin/sh", "sh", NULL);
      } 
      else
      	return 1;
   }
   return 0;
}
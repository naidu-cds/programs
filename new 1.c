#include <stdio.h>

main() {

   FILE *fp;
   char buff[255];

   fp = fopen(argv[1], "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );
   fclose(fp);

}
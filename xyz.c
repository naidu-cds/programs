#include<stdio.h>
int main()
{
FILE *fp;
fp= fopen("xyz.txt",w+);
fprintf(fp, "xyzpqr\n");
   fputs("no input", fp);
   fclose(fp);
}
#include <stdio.h>

#include <string.h>

struct node

{

int data;

struct node *link;

};

typedef struct node ll;

int main () {

FILE *fp;

fp = fopen("data", "wb");

ll n1;

n1.data = 100 ;

n1.link = 2222;

fwrite(&n1, sizeof(n1), 1, fp);

n1.data = 200 ;

n1.link = 3333;

fwrite(&n1, sizeof(n1), 1, fp);

n1.data = 200 ;

n1.link = 4444;

fwrite(&n1, sizeof(n1), 1, fp);

printf("Done writing to file ");

fclose(fp);

return(0);

}

#include <string.h>

struct node

{

int data;

struct node *link;

};

typedef struct node ll;

int main () {

FILE *fp;

ll n2;// empty node

fp = fopen("data", "rb");

fseek(fp, 0, SEEK_SET);

fread(&n2, sizeof(n2), 1, fp);// fill n2 from file

printf("%d",n2.data);

printf("%u",n2.link);

fclose(fp);

return(0);
}
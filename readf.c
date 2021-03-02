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

ll n2;// empty node

fp = fopen("data", "rb");//open file in read and binary

fseek(fp, (sizeof(n2)), SEEK_SET);// will set file pointer to start of second record

fread(&n2, sizeof(n2), 1, fp);// fill n2 from file

printf("%d",n1.data);

printf("%u",n1.link);
printf("%d",n2.data);

printf("%u",n2.link);

printf("%d",n3.data);

printf("%u",n3.link);


fclose(fp);

return(0);

}
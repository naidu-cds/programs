#include <stdio.h>

int main ()
{
  int a = 4;
  int b = 6;
  callval(a);
  callref(&b);
  return 0;

}

int callval (int a)
{
  a = a + 1;
  printf ("value of a is %d", a);
}

int callref (int p)
{
  printf ("value of p is %d", p);

}
#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

  char b = 'a';
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));

  float c = 12.345;
  printf("float c value: %f and size: %d bytes\n", c, sizeof(c));

  double d = 123.456;
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));

  short int e = 9999;
  printf("int e value: %d and size: %d bytes\n", e, sizeof(e));

  signed int f = -654;
  printf("int f value: %d and size: %d bytes\n", f, sizeof(f));
}


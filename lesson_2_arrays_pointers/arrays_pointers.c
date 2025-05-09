#include <stdio.h>

int main()
{
  int v[5] = {1, 2, 3, 4, 5};
  int *p0 = &v[0];
  int *p1 = &v[1];
  int *p2 = &v[2];
  int *p3 = &v[3];
  int *pall = v;
  printf("v[0] = %i, at address %p \n", *p0, p0);
  printf("v[1] = %i, at address %p \n", *p1, p1);
  printf("v[2] = %i, at address %p \n", *p2, p2);
  printf("v[3] = %i, at address %p \n", *p3, p3);
  printf("pointer of the total array = %p \n", pall);
  // curiously enough, the pointers pall is the same as the one of v's 1st element v[0]
  // this is related to pointers arithmetics
  printf("v[0] at address %p \n", p0);
  printf("v[1] at address %p \n", (p0 + 1));
  printf("v[2] at address %p \n", (p0 + 2));
  printf("v[3] at address %p \n", (p0 + 3));
  // one can also populate an array using pointers arithmetics:
  //   for ex, v's 4th element:
  *(p0 + 3) = 3030;
  printf("v[3] = %i\n", v[3]);
  // let's try to change a value at a unallocated pointer's address:
  // --> should create an error at runtime:
  *(p0 + 7) = 1014;
  printf("value = %i \n", *(p0 + 7));
  // On the contrary, I won't be able to access a value of pall that exceeds the array's length:
  pall[1400] = 3432;

  return 0;
}
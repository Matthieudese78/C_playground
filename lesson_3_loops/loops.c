#include <stdio.h>

int main()
{
  int v[5] = {1, 2, 3, 4, 5};
  int *p = v;
  printf("v[0] = %i \n", v[0]);
  // WHILE
  int counter = 0;
  do
  {
    printf("v[%i] = %i \n", counter, v[counter]);
    counter += 1;
  } while (counter < 5);
  // FOR
  for (int counter = 4; counter >= 0; counter--)
  {
    printf("v[%i] = %i \n", counter, v[counter]);
  }
  // with break & continue ?

  // END
  return 0;
}
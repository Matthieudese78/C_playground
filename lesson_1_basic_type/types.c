#include <stdio.h>
// stdint.h standardized width in bytes : always the same length
struct person
{
  char name[50];
  int age;
  float height;
};

  // *int is a pointer i.e. an address :
  int y = 7;
  // gets the address in memory where y is stored
  int *p = &y;
  // the two following syntaxes yield the same output:
  printf("address %p, value %i \n", p, *p);
  printf("address %p, value %i \n", &y, y);
  // now i want to change the value of the stored integer at address p:
  *p = 14;
  printf("new value *p  = %i \n", *p);
  // does it also modifies y?
  printf("new value y = %i \n", y);
  // --> yes it does, *p and y are intricate!
  struct person me;
  struct person you;
  me.age = 33;
  you.height = 1.80;
  printf("I'm %i years old but you are %f m tall \n", me.age, you.height);
}

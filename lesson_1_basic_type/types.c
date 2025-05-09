#include <stdio.h>
// numerical, arrays, structures and pointers, char
//    Integers:
// stdint.h standardized width in bytes : always the same length
// portable & predictable
//    Floating point numbers: floats, doubles (double as much precision as a float), long doubles

struct person
{
  char name[50];
  int age;
  float height;
};

int main()
{
  char c = 'A';
  printf("character %c\n", c);
  int x[50];
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

  // *p stores the value, i.e. y
  // p is the pointer for example: 0x7fff46511434,
  // i want to re-locate the y variable:
  x[0] = 5;
  x[3] = 500;
  printf("%i, %i, %i \n", x[0], x[3], x[49]);
  struct person me;
  struct person you;
  me.age = 33;
  you.height = 1.80;
  printf("I'm %i years old but you are %f m tall \n", me.age, you.height);
}

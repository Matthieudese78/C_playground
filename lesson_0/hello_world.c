// import standard input / output library
#include <stdio.h>

// functional part : main outputs an integer that is the error code
int add3(int a, int b, int c)
{
  int result = a + b + c;
}

int main()
{
  int mynumber = 0;
  int other;
  float arealnumber = 4.5;

  other = 17;

  printf("Hello World %i %i %f \n", mynumber, other, arealnumber);

  printf("add3 result %i + %i + %f = %i", mynumber, other, arealnumber, add3(mynumber, other, arealnumber));
}
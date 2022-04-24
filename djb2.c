#include <stdio.h>

unsigned long djb2(char*s) {
  unsigned long r; char c;
  for(r=5381; c=*s++; r += (r << 5) + c);
  return r;
}

int main(int argc, char**argv) {
  char*s; int i; unsigned long r; char c;
  for(i=0; ++i < argc; printf("%lx %s\n", djb2(argv[i]), argv[i]));
  return 0;
}

#include <stdio.h>


int main(int arg, char* argc[]){
  printf("\nHello assignment1.\n Gary Kelly 14493172\n");
  int i = 2;
  printf("Size of an int is %d", sizeof(i));

  int j = 2;
  int *p = &j;
  printf("\nSize of an int address is %d", sizeof(p));
  
 
  long b= 200;
  printf("\nSize of an long is %d", sizeof(b));

  double m = 20.1;
  double *n = &m;
  printf("\nSize of an double address is %d", sizeof(n));

  
  char ch = 'a';
  char *cha = &ch;
  char **chart = &cha;
  printf("\nSize of an int is %d\n", sizeof(chart));

 
  return 0;
}


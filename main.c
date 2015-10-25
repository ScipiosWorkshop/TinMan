#include "probability.h"
#include <stdlib.h>
#include <stdio.h>
#include "hash.h"



int main(){
  int a;
  /*
  for(a = 0; a < 10; a++){
    printf("Factorial of %d: %d\n",
	   a,
	   factorial(a));

  }
  
  char * c = "Emrakul, The Aeons Torn";
  char * d = "Ulamog, The Endless Hunger";
  struct nlist list;
  char e = 5;
  insert(c, &e);
  insert(d, &e);
  
  element * q;
  char * lookupelement = "Emrakul, The Aeons Torn";
  q = lookup(lookupelement);
  if(q != NULL){
    printf("Number of cards: %d\n", *(q->value));
  }
  */
  int f = 5;
  int g = 2;
  int h = 3;
  printf("%d choose %d: %d\n", f, g, n_choose_k(f, g));
  printf("%d choose %d: %d\n", f, h, n_choose_k(f, h));

}

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
  printf("%d choose %d: %lld\n", f, g, n_choose_k(f, g));
  printf("%d choose %d: %lld\n", f, h, n_choose_k(f, h));
  //printf("%d choose %d efficient: %d\n", f, h, n_choose_k_efficient(f, h));
  //printf("20 factorial: %lld\n", factorial(20));
  int t;
  //for(t = 1; t < 14; t++){
  //  printf("factorial %d: %lld\n", t, factorial(t));
  //}
  //printf("efficient 40 choose 2: %lld\n", n_choose_k_efficient(40,2));
  //printf("regular 40 choose 2: %lld\n", n_choose_k(40,2));
  double q = calculate_hypergeometric(1,7,60,10);
 
  printf("4 copies of card in 60 card deck drawing 7 want 1: %f\n", 
  	 q);
  

}














































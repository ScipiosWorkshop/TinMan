#include <stdio.h> 
#include "probability.h"



int factorial(int number){
  int result = 1;
  int i;
  for(i = number; i > 1; i--){
    result *= i;
  }
}


int n_choose_k(int n, int k){
  int n_fact = factorial(n);
  int k_fact = factorial(k);
  int nk_fact = factorial(n-k);
  return n_fact/(k_fact * nk_fact);
}

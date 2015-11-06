#include <stdio.h> 
#include "probability.h"







long long int factorial(int number){
  long long int result = 1;
  int i;
  for(i = 1; i <= number; i++){
    
    result *= i;
  }
  return result;
}

//int sterling_factorial(unsigned long int number){


//}


long long  n_choose_k(int n, int k){
  
  int n_fact = factorial(n);
  printf("n: %d, Nfact: %d\n", n, n_fact);
  int k_fact = factorial(k);
  printf("k: %d, Kfact: %d\n", k, k_fact);
  int nk_fact = factorial(n-k);
  printf("nkfact: %d\n", nk_fact);
  return n_fact/(k_fact * nk_fact);
}

long long n_choose_k_efficient(int n, int k){
  int i;
  int result = 1;
  for(i = 1; i <=k; i++){
    result *= ((n + 1 - i) / i);
  }

  return result;
}

long double calculate_hypergeometric(int successes, int draws, int population_size, int total_successes){
  printf("Entered");
  unsigned int numerator = (n_choose_k_efficient(total_successes, successes) * n_choose_k_efficient(population_size - total_successes, draws - successes));
  //printf("Numerator: %L\n", numerator);
  long double denominator = n_choose_k_efficient(population_size, draws);
  //printf("Denomiator: %L\n", denominator);
  return numerator / denominator * 1.0;

}



long double calculate_multi_hypergeometric(int total_partial_successes[], int target_successes[], int num_targets, int total_population, int draw_size){
  unsigned int i;
  long double numerator = 1;
  for(i = 0; i < num_targets; i++){
    printf("Numerator: %Lf\n", numerator);
    printf("Total partial succ: %d, Target: %d\n", total_partial_successes[i], target_successes[i]);
    numerator *= n_choose_k_efficient(total_partial_successes[i], 
				target_successes[i]);
  }
  
  long double denominator = n_choose_k_efficient(total_population,
						 draw_size);
  printf("Denominator: %Lf\n", denominator);
  return numerator / denominator;

}

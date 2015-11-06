#ifndef PROBABILITY_H
#define PROBABILITY_H

#include <stdlib.h>



//Function Declarations
long long n_choose_k(int n, int k);
long long int factorial(int number);
long double calculate_hypergeometric(int successes, int draws, int population_size, int total_successes);
long double calculate_multi_hypergeometric(int total_partial_successes[], int target_successes[], int num_targets, int total_population,
			  	   int draw_size);
long long n_choose_k_efficient(int n, int k);


#endif

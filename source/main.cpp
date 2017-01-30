#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
#include <vector>

std::vector<double> CalculateCycle(double lambda);

//Returns population growth of the next year
double nextYearPopulation(double currPopulation, double lambda);

//Changes double to a certain decimal point
void roundDecimals(double& val, const unsigned int places);

const unsigned int places = 4;

int main (int argc, char* argv[]){
	char* lambda_input = argv[1];
	double lambda = std::atof(lambda_input);
	std::vector<double> cycle = CalculateCycle(lambda);
	for(auto curr : cycle){
		printf("%f \n", curr);
	}
	printf("The size of the cycle is = %lu \n", cycle.size());
	return 0;
}

//Xn+1= Xn(1-Xn)L

std::vector<double> CalculateCycle(double lambda){
	std::vector<double> cycle;

	double population = 0.5;//initial population
	for(int i = 0; i < 10000000; ++i){
		population = nextYearPopulation(population, lambda);
	}
	roundDecimals(population, places);
	for(int i = 0; i < 1000000; ++i){
		population = nextYearPopulation(population, lambda);
		roundDecimals(population, places);
		std::vector<double>::iterator it;
		it = std::find(cycle.begin(), cycle.end(), population);
		if(it == cycle.end()){
			cycle.push_back(population);
		}
	}
	return cycle;
}

double nextYearPopulation(double currPopulation, double lambda){
	return (lambda)*(currPopulation)*(1 - currPopulation);
}

void roundDecimals(double& val, const unsigned int places){
	double off = pow(10,places);
	val =  std::ceil(val*off)/off;
}
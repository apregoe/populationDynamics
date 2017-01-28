#include <iostream>
#include <vector>
#include <stdlib.h>
#include <vector>

std::vector<double> CalculateCycle(double lambda);

int main (int argc, char* argv[]){
	char* lambda_input = argv[1];
	double lambda = std::atof(lambda_input);
	std::vector<double> cycle = CalculateCycle(lambda);
	printf("Lambda = %f \n", lambda);
	return 0;
}

std::vector<double> CalculateCycle(double lambda){
	std::vector<double> v;
	return v;
}
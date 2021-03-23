#include "Map.hpp"
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	int numCities;
	int numToursPerGen;
	int numGens;
	double percentMutations;

	cout << "Number of cities: ";
	cin >> numCities;
	cout << "Number of tours per single generation: ";
	cin >> numToursPerGen;
	cout << "Number of generations to run: ";
	cin >> numGens;
	cout << "Percent of generation comprised of mutations: ";
	cin >> percentMutations;

	Map tspMap(numCities);
	tspMap.readDistances();



	return 0;
}

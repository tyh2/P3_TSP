#include "BruteForce.hpp"
#include "Map.hpp"

#include <iostream>
#include <vector>
using namespace std;

BruteForce::BruteForce(Map m)
{
	double** tempDist = m.getDistances();
	this->map.setNumCities(m.getNumCities());
	this->map.setDistances(tempDist);	
}

void BruteForce::runBruteForce()
{
	currTour = map.getInitialTour();
/*
	for(int i = 0; i < currTour.size(); i++) {
		cout << currTour[i] << endl;
	}
*/
}

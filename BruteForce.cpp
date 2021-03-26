#include "BruteForce.hpp"
#include "Map.hpp"

#include <iostream>
#include <vector>
using namespace std;

BruteForce::BruteForce(Map m)
{
	this->map.setNumCities(m.getNumCities());
	this->map.setDistances(m.getDistances());	
}

void BruteForce::runBruteForce()
{
	currTour = map.getInitialTour();
}

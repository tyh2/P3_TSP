/**************************************
 * Name: Tatum Hackler
 * File name: Map.cpp
 * COP4534 Project #3
 *
 * Defining methods for Map class.
 * The Map class contains fields for the number of cities and an adjacency matrix of distances between each city.
 * This class contains methods to read in the distances between cities and access tour information for the Map.
 *************************************/ 
#include "Map.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Map::Map(int numCities)
{
	this->numCities = numCities;
}

void Map::readDistances()
{
	ifstream inFile;
	inFile.open("distances.txt");
	string thisDistance;
	size_t sz = 0;
	
	if(inFile.is_open()) {
 		for(int i = 0; i < 20; i++) {
			for(int j = 0; j < 20; j++) {
				getline(inFile, thisDistance);
				cout << thisDistance;
				//distances[i][j] = stod(thisDistance);
			}
		}
	}

	inFile.close();
}

vector<int> Map::getInitialTour()
{
	vector<int> initTour(numCities++);

	for(int i = 0; i < numCities; i++) {
		initTour[i] = i;
	}

	initTour[numCities] = 0;
	return initTour;
}

double Map::getTourCost(vector<int> tour)
{
	double cost = 0;
	for(int i = 0; i < (tour.size()-1) ; i++) {
		cost += getDistance(tour.at(i), tour.at(i+1));
	}

	return cost;
}

double Map::getDistance(int city1, int city2) const
{
	return distances[city1][city2];
}






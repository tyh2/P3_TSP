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

Map::Map()
{
	numCities = 0;
	distances = new double *[20];
	for(int i =0; i < 20; i++) {
		distances[i] = new double[20];
	}

	for(int i = 0; i < 20; i++) {
                for(int j = 0; j < 20; j++) {
                        distances[i][j] = 0.0;
                }
        }
}

Map::Map(int numCities)
{
	this->numCities = numCities;
	 distances = new double *[20];
        for(int i =0; i < 20; i++) {
                distances[i] = new double[20];
        }

	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 20; j++) {
			distances[i][j] = 0.0;
		}
	}
}

void Map::readDistances()
{
	ifstream inFile;
	inFile.open("distances.txt");
	const int MAX = 20;
	
	if(inFile.is_open()) {
 		for(int i = 0; i < MAX; i++) {
			for(int j = 0; j < MAX; j++) {
				if(i == j) {
					distances[i][j] = 0.0;
				}
				else {
					inFile >> distances[i][j];
				}
			}
		}
	}

	inFile.close();
}

void Map::setNumCities(int cities)
{
	numCities = cities;
}

int Map::getNumCities()
{
	return numCities;
}

void Map::setDistances(double** dist)
{
	distances = dist;
}

double** Map::getDistances()
{
	return distances;
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






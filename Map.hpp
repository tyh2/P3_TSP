/**************************************
 * Name: Tatum Hackler
 * File name: Map.hpp
 * COP4534 Project #3
 *
 * The Map class contains fields for the number of cities and an adjacency matrix of distances between each city.
 * This class contains methods to read in the distances between cities and access tour information for the Map.
 *************************************/
#ifndef MAP_HPP
#define MAP_HPP
#include <vector>
using namespace std;

class Map {

	private:
		int numCities;
		double distances[20][20];
	public:
		Map(int numCities);
		void readDistances();
		vector<int> getInitialTour();
		double getTourCost(vector<int> tour);
		double getDistance(int city1, int city2) const;
};
#endif

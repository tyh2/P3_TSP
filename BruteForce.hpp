#ifndef BRUTEFORCE_HPP
#define BRUTEFORCE_HPP

#include "Map.hpp"
#include <iostream>
#include <vector>
using namespace std;

class BruteForce {

	private:
		vector<int> currTour;
		vector<int> bestTour;
		double bestCost;
		Map map;
	public:
		BruteForce(Map map);
		void runBruteForce();
};
#endif

#include <iostream>
#include <string>
#include "planets.h"

int main() {
	const int EARTH_RADIUS = 6371;
	const double EARTH_WEIGHT = 5.972e24;
	const double EARTH_DISTANCE = 148.4;

	Planets earth;
	earth.setName("EARTH");
	earth.setRadius(EARTH_RADIUS);
	earth.setWeight(EARTH_WEIGHT);
	earth.setDistance(EARTH_DISTANCE);


	std::cout << "Our planet is " << earth.getName() << std::endl;
	std::cout << "Earth gravity is " << earth.getGravity() << std::endl;
	std::cout << "Earth radius is " << earth.getRadius()  << " km" << std::endl;
	std::cout << "Earth weight is " << earth.getWeight() << " km" << std::endl;
	std::cout << "And distance between sun and earth is " << earth.getDistance() << " million km\n";

	return 0;
}
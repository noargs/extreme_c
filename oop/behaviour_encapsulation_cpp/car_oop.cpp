#include <iostream>
#include "car.h"

int main(int argc, char** argv) {
	Car car("Renault");
	
	car.Refuel(100.0);
	std::cout << "Car is refueled, the correct fuel level is "
		<< car.fuel << std::endl;
	while (car.fuel > 0) {
		std::cout << "Car fuel level: " << car.fuel << std::endl;
		if (car.speed < 80) {
			car.Accelerate();
			std::cout << "Car has been accelerated to the speed: "
				<< car.speed << std::endl;
		} else {
			car.Brake();
			std::cout << "Car has been slowed down to the speed: "
				<< car.speed << std::endl;
		}
	}
	
	std::cout << "Car rant out the fuel! Slowing down ..." 
		<< std::endl;
	
	while (car.speed > 0) {
		car.Brake();
		std::cout << "Car has been slowed down to the speed: "
			<< car.speed << std::endl;
	}
	std::cout << "Car is stopped!" << std::endl;
	
	// when leaving the function main, the object 'car' gets
	// destructed automatically.
	
	return 0;
}
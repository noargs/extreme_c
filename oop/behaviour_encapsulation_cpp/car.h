#ifndef CAR_H
#define CAR_H

// explicit encapsulation of attributes as well as behaviour
// because C++ knows about both, whereas C only knows about attributes (explicit encapsulation)
// therefore in C behaviours are implicitly encapsulated

class Car {
public:
	Car(const char*);
	~Car();
	
	void Accelerate();
	void Brake();
	void Refuel(double);
	
	// Data members (Attribute in C)
	char name[32];
	double speed;
	double fuel;	
}

#endif
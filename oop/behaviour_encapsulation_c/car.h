#ifndef CAR_H
#define CAR_H


// type car_t is "attribute structure" of Car class
typedef struct {
    char name[32];
    double speed;
    double fuel;
} car_t;

// declaration of "behaviour function" of Car class
void car_construct(car_t*, const char*);
void car_destruct(car_t*);
void car_accelerate(car_t*);
void car_brake(car_t*);
void car_refuel(car_t*, double);

#endif
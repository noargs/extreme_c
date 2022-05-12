#ifndef CAR_H
#define CAR_H

struct car_t;

// allocate memory
struct car_t* car_new();

// construct
void car_ctor(struct car_t*);

// destruct
void car_dtor(struct car_t*);

// behaviour
void car_start(struct car_t*);
void car_stop(struct car_t*);
double car_get_engine_temperature(struct car_t*);

#endif
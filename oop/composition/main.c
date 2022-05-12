#include <stdio.h>
#include <stdlib.h>

#include "car.h"

int main(int argc, char** argv) {

    // allocate memory
    struct car_t *car = car_new();

    // construct
    car_ctor(car);

    printf("Engine temp before starting: %.2f\n", car_get_engine_temperature(car));
    car_start(car);
    printf("Engine temp after starting: %.2f\n", car_get_engine_temperature(car));

    car_stop(car);
    printf("Engine temp after stopping: %.2f\n", car_get_engine_temperature(car));

    // destruct
    car_dtor(car);

    // free the memory
    free(car);

    return 0;


}
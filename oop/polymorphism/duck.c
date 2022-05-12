#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "animal.h"
#include "animal_p.h"

typedef struct {
    animal_t animal;
} duck_t;

// Define a new behaviour for the duck's sound
void __duck_sound(void* ptr) {
    animal_t* animal = (animal_t*)ptr;
    printf("%s: Quacks\n", animal->name);
}

// allocate memory
duck_t* duck_new() {
    return (duck_t*)malloc(sizeof(duck_t));
}

// construct
void duck_ctor(duck_t* duck) {
    animal_ctor((struct animal_t*)duck);
    strcpy(duck->animal.name, "DUCK");
    // point to the new behaviour function. overrifing
    // is actually happening here
    duck->animal.sound_func = __duck_sound;
}

// destruct
void duck_dtor(duck_t* duck) {
    animal_dtor((struct animal_t*)duck);
}
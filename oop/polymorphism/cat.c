#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "animal.h"
#include "animal_p.h"

typedef struct {
    animal_t animal;
} cat_t;

// define a new behaviour for the cat's sound
void __cat_sound(void* ptr) {
    animal_t* animal = (animal_t*)ptr;
    printf("%s: Meow\n", animal->name);
}

// allocate memory
cat_t* cat_new() {
    return (cat_t*)malloc(sizeof(cat_t));
}

// construct
void cat_ctor(cat_t* cat) {
    animal_ctor((struct animal_t*)cat);
    strcpy(cat->animal.name, "Cat");
    // Point to the new behaviour function. overriding
    // is actually happening here
    cat->animal.sound_func = __cat_sound;
}

// destruct
void cat_dtor(cat_t* cat) {
    animal_dtor((struct animal_t*)cat);
}
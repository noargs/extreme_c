#ifndef ANIMAL_P_H
#define ANIMAL_P_H

// the function pointer type needed to point to
// different morphs of "animal_sound()"
typedef void (*sound_func_t)(void*);

// forward declaration
typedef struct {
    char* name;
    // this memember is a pointer to the function which
    // performs the actual sound behaviour
    sound_func_t sound_func;
} animal_t;


#endif
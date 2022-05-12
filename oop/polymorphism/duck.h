#ifndef DUCK_H
#define DUCK_H

// forward declaration
struct duck_t;

// allocate memory
struct duck_t* duck_new();

// construct
void duck_ctor(struct duck_t*);

// destruct
void duck_dtor(struct duck_t*);

// all behaviour functions are inherited from the animal class.

#endif
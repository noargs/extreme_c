#ifndef ANIMAL_H
#define ANIMAL_H

// forward declaration
struct animal_t;

// allocate memory
struct animal_t* animal_new();

// construct
void animal_ctor(struct animal_t*);

// destruct
void animal_dtor(struct animal_t*);

// "Animal" class have two behaviour functions, animal_get_name() and animal_sound()
// animal_soud() supposed to be polymorphic and can be overriden
// animal_get_name() is not polymorphic and children cannot override it.
void animal_get_name(struct animal_t*, char*);
void animal_sound(struct animal_t*);

#endif
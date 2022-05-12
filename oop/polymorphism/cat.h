#ifndef CAT_H
#define CAT_H

// forward declaration
struct cat_t;

// allocate memory
struct cat_t* cat_new();

// construct
void cat_ctor(struct cat_t*);

// deconstruct
void cat_dtor(struct cat_t*);

// all behaviour functions are inherited from the animal class


#endif
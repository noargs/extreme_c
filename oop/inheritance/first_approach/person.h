#ifndef PERSON_H
#define PERSON_H

// forward declaration
struct person_t;

// allocate memory
struct person_t* person_new();

// construct
void person_ctor(struct person_t*,
                const char*, /* first name */
                const char*, /* last name */
                unsigned int /* birth year */);

// destruct
void person_dtor(struct person_t*);

// behaviour functions
void person_get_first_name(struct person_t*, char*);
void person_get_last_name(struct person_t*, char*);
unsigned int person_get_birth_year(struct person_t*);

#endif
#ifndef STUDENT_H
#define STUDENT_H

// forward declaration
struct student_t;

// allocate memory
struct student_t* student_new();

// construct
void student_ctor(struct student_t*,
                  const char* /* first name */,
                  const char* /* last name */,
                  unsigned int /* birth year */,
                  const char* /* student number */,
                  unsigned int /* passed credits */);

void student_dtor(struct student_t*);

// behaviour functions
void student_get_first_name(struct student_t*, char*);
void student_get_last_name(struct student_t*, char*);
unsigned int student_get_birth_year(struct student_t*);
void student_get_student_number(struct student_t*, char*);
unsigned int student_get_passed_credits(struct student_t*);

#endif
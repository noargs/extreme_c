#ifndef STUDENT_H
#define STUDENT_H

// forward declaration
struct student_t;

// allocate memory
struct student_t* student_new();

// construct
void student_ctor(struct student_t*,
                  const char* /* first_name */,
                  const char* /* last_name */,
                  unsigned int /* birth year */,
                  const char* /* student number */,
                  unsigned int /* passed credits */);

// destruct 
void student_dtor(struct student_t*);

// behaviour functions
void student_get_student_number(struct student_t*, char*);
unsigned int student_get_passed_credits(struct student_t*);

#endif
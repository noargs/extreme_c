#include <stdlib.h>
#include <string.h>

#include "person.h"

// forward declaration
typedef struct {
    char* student_number;
    unsigned int passed_credits;
    // we have to have a pointer here since the type
    // person_t is incomplete
    struct person_t* person;
} student_t;

// allocate memory
student_t* student_new(){
    return (student_t*)malloc(sizeof(student_t));
}

// construct
void student_ctor(student_t* student,
                  const char* first_name,
                  const char* last_name,
                  unsigned int birth_year,
                  const char* student_number,
                  unsigned int passed_credits) {

    // allocate memory for the parent object
    student->person = person_new();
    person_ctor(student->person, first_name, last_name, birth_year);
    student->student_number = (char*)malloc(16 *sizeof(char));
    strcpy(student->student_number, student_number);
    student->passed_credits = passed_credits;
}

// destruct
void student_dtor(student_t* student) {
    // we need to destruct the child object first
    free(student->student_number);
    // then, we need to call the destructor function
    // of the parent class
    person_dtor(student->person);
    // we need to free the parent objects's allocated memory
    free(student->person);
}

// behaviour functions
void student_get_first_name(student_t* student, char* buffer) {
    // we have to use person's behaviour function
    person_get_first_name(student->person, buffer);
}

void student_get_last_name(student_t* student, char* buffer) {
    // we have to use person's behaviour function
    person_get_last_name(student->person, buffer);
}

unsigned int student_get_birth_year(student_t* student) {
    // we have to use person's behaviour function
    return person_get_birth_year(student->person);
}

void student_get_student_number(student_t* student, char* buffer) {
    strcpy(buffer, student->student_number);
}

unsigned int student_get_passed_credits(student_t* student) {
    return student->passed_credits;
}
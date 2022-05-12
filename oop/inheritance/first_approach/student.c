#include <stdlib.h>
#include <string.h>

#include "person.h"

// person_t is defined in the following header
// file and we need it here
#include "person_p.h"

// forward declaration
typedef struct {
    // here, we inherit all attributes from the person class and
    // also we can use all of its behaviour functions because of
    // this nesting
    person_t person;
    char* student_number;
    unsigned int passed_credits;
} student_t;

// allocate memory
student_t* student_new() {
    return (student_t*)malloc(sizeof(student_t));
}

// construct
void student_ctor(student_t* student,
                  const char* first_name,
                  const char* last_name,
                  unsigned int birth_year,
                  const char* student_number,
                  unsigned int passed_credits) {

    person_ctor((struct person_t*)student, first_name, last_name, birth_year);
    student->student_number  = (char*)malloc(16 * sizeof(char));
    strcpy(student->student_number, student_number);
    student->passed_credits = passed_credits;

}

// destruct
void student_dtor(student_t* student) {
    // we need to destruct the child object first
    free(student->student_number);
    // then we need to call the destructor function of
    // parent class
    person_dtor((struct person_t*)student);
}

// behaviour functions
void student_get_student_number(student_t* student, char* buffer) {
    strcpy(buffer, student->student_number);
}

unsigned int student_get_passed_credits(student_t* student) {
    return student->passed_credits;
}
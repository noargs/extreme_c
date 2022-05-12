#include <stdio.h>
#include <stdlib.h>

#include "person.h"
#include "student.h"

/*
*   First Approach: Make it so that child class "student_t" has
*   access to the private implementation (actual definition) of 
*   the base class "person_t"
*
*   private implementation of base class "person_t" is accessable
*   via private header "person_p.h"
*
*   in "main.c" we have included the public interfaces of both the
*   Person and Student classes(not the private header file)
*
*/

int main(int argc, char** argv) {
    // construct student object
    struct student_t* student = student_new();
    student_ctor(student, "John", "Doe", 1987, "TA5667", 134);

    // now we use person's behaviour functions to
    // read person's attributes from the student object
    char buffer[32];

    // upcasting to a pointer of parent type
    struct person_t* person_ptr = (struct person_t*)student;

    person_get_first_name(person_ptr, buffer);
    printf("First name: %s\n", buffer);

    person_get_last_name(person_ptr, buffer);
    printf("Last name: %s\n", buffer);

    printf("Birth year: %d\n", person_get_birth_year(person_ptr));

    // now, we read the attributes specific to the student object,
    student_get_student_number(student, buffer);
    printf("Student number: %s\n", buffer);

    printf("Passed credits: %d\n", student_get_passed_credits(student));

    // destruct and free the student object
    student_dtor(student);
    free(student);

    return 0;
}
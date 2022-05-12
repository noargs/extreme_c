#include <stdio.h>

typedef struct {
    char first_name[32];
    char last_name[32];
    unsigned int birth_year;
} person_t;

typedef struct {
    person_t person;
    char student_number[16]; // extra attribute
    unsigned int passed_certificate; // extra attribute
} student_t;

int main(int argc, char** argv) {
    student_t s;
    student_t* s_ptr = &s;

    // NOTE: you can only cast a pointer variable not structure variable
    //       therefore "person_t person = (person_t)s;" is wrong and will not work
    person_t* p_ptr = (person_t*)&s;
    printf("Student pointer points to %p\n", (void*)s_ptr);
    printf("Person pointer points to %p\n", (void*)p_ptr);


    return 0;
}
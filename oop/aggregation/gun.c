#include <stdlib.h>

typedef int bool_t;

typedef struct {
    int bullets;
} gun_t;

// allocate memory
gun_t* gun_new() {
    return (gun_t*)malloc(sizeof(gun_t));
}

// construct
void gun_ctor(gun_t* gun, int initial_bullets) {
    gun->bullets = 0;
    if (initial_bullets > 0) {
        gun->bullets = initial_bullets;
    }
}

// destruct
void gun_dtor(gun_t* gun) { }

// behaviour functions
bool_t gun_has_bullets(gun_t* gun) {
    return (gun->bullets > 0);
}

void gun_trigger(gun_t* gun) {
    gun->bullets--;
}

void gun_refill(gun_t* gun) {
    gun->bullets = 7;
}
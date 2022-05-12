#ifndef GUN_H
#define GUN_H

typedef int bool_t;

struct gun_t;

// allocate memory
struct gun_t* gun_new();

// construct
void gun_ctor(struct gun_t*, int);

// destruct
void gun_dtor(struct gun_t*);

// behaviour functions
bool_t gun_has_bullets(struct gun_t*);
void gun_trigger(struct gun_t*);
void gun_refill(struct gun_t*);

#endif
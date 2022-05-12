#ifndef PLAYER_H
#define PLAYER_H

// type forward declarations
struct player_t;
struct gun_t;

// allocate memory
struct player_t* player_new();

// construct
void player_ctor(struct player_t*, const char*);

// destruct
void player_dtor(struct player_t*);

// behaviour functions
void player_pickup_gun(struct player_t*, struct gun_t*);
void player_shoot(struct player_t*);
void player_drop_gun(struct player_t*);

#endif
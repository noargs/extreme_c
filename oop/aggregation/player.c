#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "gun.h"

typedef struct {
    char* name;
    struct gun_t* gun;
} player_t;

// allocate memory
player_t* player_new() {
    return (player_t*)malloc(sizeof(player_t));
}

// construct
void player_ctor(player_t* player, const char* name){
    player->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
    strcpy(player->name, name);

    // this is important. we need to nullify the aggregation pointers
    // if they are not meant to be set in constructor
    player->gun = NULL;
}

// destruct
void player_dtor(player_t* player) {
    free(player->name);
}

// behaviour functions
void player_pickup_gun(player_t* player, struct gun_t* gun) {
    // following line began the aggregation
    player->gun = gun;
}

void player_shoot(player_t* player) {
    // we need to know if player held the gun
    // otherwise, shooting is meangliss
    if (player->gun) {
        gun_trigger(player->gun);
    } else {
        printf("Player wants to shoot but he doesnt have a gun!");
        exit(1);
    }
}

void player_drop_gun(player_t* player) {
    // after the following line the aggregation relation
    // ends between two objects. Note that the object gun
    // should not be freed since this object is not its
    // owner like composition
    player->gun = NULL;
}
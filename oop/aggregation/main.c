#include <stdio.h>
#include <stdlib.h>

#include "player.h"
#include "gun.h"

int main(int argc, char** argv) {

    // create (allocate memory)
    struct gun_t* gun = gun_new();
    // construct
    gun_ctor(gun, 3);

    // create (allocate memory)
    struct player_t* player = player_new();
    // construct
    player_ctor(player, "Sun");

    // Begin the aggregation relation
    player_pickup_gun(player, gun);

    // shoot until no bullets is left
    while (gun_has_bullets(gun)) {
        player_shoot(player);
    }

    // refill the gun
    gun_refill(gun);

    // end the aggregation relation
    player_drop_gun(player);

    // destruct
    player_dtor(player);
    free(player);

    // destruct
    gun_dtor(gun);
    free(gun);

    return 0;

}
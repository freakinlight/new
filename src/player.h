#ifndef PLAYER_H
#define PLAYER_H

#include <SDL2/SDL.h>

typedef struct {
    // Player properties
} Player;

Player init_player(SDL_Renderer* renderer);
void update_player(Player* player);
void render_player(Player* player, SDL_Renderer* renderer);

#endif


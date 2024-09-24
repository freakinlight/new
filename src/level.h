#ifndef LEVEL_H
#define LEVEL_H

#include <SDL2/SDL.h>

typedef struct {
    // Level properties
} Level;

Level init_level(SDL_Renderer* renderer);
void render_level(Level* level, SDL_Renderer* renderer);

#endif


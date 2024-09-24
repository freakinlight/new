#ifndef ENEMY_H
#define ENEMY_H

#include <SDL2/SDL.h>

typedef struct {
    // Enemy properties
} Enemy;

Enemy init_enemy(SDL_Renderer* renderer);
void update_enemy(Enemy* enemy);
void render_enemy(Enemy* enemy, SDL_Renderer* renderer);

#endif


#include <SDL2/SDL.h>
#include "player.h"
#include "enemy.h"
#include "level.h"

int main(int argc, char* argv[]) {
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;

    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Dungeon Explorer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    Player player = init_player(renderer);
    Enemy enemy = init_enemy(renderer);
    Level level = init_level(renderer);

    SDL_bool running = SDL_TRUE;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                running = SDL_FALSE;
            }
        }

        update_player(&player);
        update_enemy(&enemy);

        SDL_RenderClear(renderer);
        render_level(&level, renderer);
        render_player(&player, renderer);
        render_enemy(&enemy, renderer);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}


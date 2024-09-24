#ifndef COMBAT_H
#define COMBAT_H

#include "player.h"
#include "enemy.h"

void process_player_attack(Player* player, Enemy* enemy);
void process_enemy_attack(Player* player, Enemy* enemy);

#endif


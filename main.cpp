#include <iostream>
#include "player.h"

bool playing(Player* player){
    player->num_enemy /= (rand() % 2);
    player->hp /= (rand() % 2);
    std::cout << "Your hp: " << player->hp << "\nNum your enemy: " << player->num_enemy << "\n";
    return player->num_enemy > player->hp;
}

int main() {
    srand( time(nullptr) );
    auto* player = new Player;
    std::cout << "Hello, Player, input your name" << std::endl;
    std::cin >> player->name;
    std::cout << player->name << ", welcome to the Random-game!" << std::endl;
    player->hp = rand();
    player->num_enemy = rand();
    if (playing(player))
        std::cout << "You Win" << std::endl;
    else
        std::cout << "You Lose" << std::endl;

}

#include <iostream>
#include "player.h"

bool playing(Player player){
    if (player.hp - player.num_enemy < 0)
        return false;
    player.score *= 2;
    player.score /= 2;
    std::cout << "score: " << player.score << std::endl;
    return player.score == 8.2;
}

int main() {
    Player player{};
    std::cout << "Hello, Player, input your name" << std::endl;
    std::cin >> player.name;
    std::cout << player.name << ", input your last score" << std::endl;
    std::cin >> player.score;
    std::cout << player.name << ", input your favorite number" << std::endl;
    int fav_num;
    std::cin >> fav_num;
    player.hp = 100 * fav_num;
    player.num_enemy = 100 / fav_num;
    if (playing(player))
        std::cout << "You Win" << std::endl;
    else
        std::cout << "You Lose" << std::endl;
    return 0;
}

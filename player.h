//
// Created by login on 25.10.2021.
//

#ifndef PROGRAM_PLAYER_H
#define PROGRAM_PLAYER_H
struct Player {
    char name[15];
    int hp;
    int num_enemy;
    ~Player(){
        std::cout << "Bye," << name << std::endl;
    }
};
#endif //PROGRAM_PLAYER_H

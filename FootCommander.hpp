//
// Created by netanel on 27/05/2020.
//

#ifndef WARGAME_THILA_FOOTCOMMANDER_HPP
#define WARGAME_THILA_FOOTCOMMANDER_HPP
#include "FootSoldier.hpp"

/////////////////////
class FootCommander : public FootSoldier {
public:
    FootCommander(int num_p): FootSoldier(num_p){
        this->damage=150;
        this->health=20;
    }
};


#endif //WARGAME_THILA_FOOTCOMMANDER_HPP
//
// Created by riyad on 08/11/2024.
//

#include "Spectator.h"
#include "./../show/IShow.h"
using namespace customer;
#include <iostream>

void Spectator::watch(show::IShow &show) {
    std::cout << "Spectateur: " << this->getFirstName() << " " << this->getLastName() << std::endl;
    std::cout << " Show regardé: " << show.getName() << std::endl;
    std::cout << "Description: " << show.getDescription() << std::endl;
    std::cout << "Type: " << show.getShowType().getName() << std::endl;
    std::cout << std::endl;
}

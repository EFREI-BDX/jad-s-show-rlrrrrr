//
// Created by riyad on 08/11/2024.
//

#ifndef ISHOW_H
#define ISHOW_H
#include <string>
#include "ShowType.h"

namespace show {
    class IShow {
    public:
        virtual std::string getName() = 0;
        virtual std::string getDescription() = 0;
        virtual ShowType getShowType() = 0;
    };
}



#endif //ISHOW_H



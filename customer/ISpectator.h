//
// Created by riyad on 08/11/2024.
//

#ifndef ISPECTATOR_H
#define ISPECTATOR_H

#include <string>
#include "./../show/IShow.h"

namespace customer {
    class ISpectator {
    public:
        virtual std::string getFirstName() =0;

        virtual std::string getLastName() =0;

        virtual void watch(show::IShow &show) =0;
    };
}


#endif //ISPECTATOR_H

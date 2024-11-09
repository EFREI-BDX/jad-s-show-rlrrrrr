//
// Created by riyad on 08/11/2024.
//

#ifndef STREETSHOW_H
#define STREETSHOW_H
#include <string>
#include <vector>

#include "Show.h"

namespace show {
    class StreetShow: public Show {
    private:
        std::vector<std::string> _performers;
    public:
        ~StreetShow()=default;
        StreetShow(const std::string& name, const std::string& description, const std::vector<std::string> &_performers ): Show(name, description,  &ShowType::STREET_SHOW)
        {
            this->_performers = _performers;
        }
        std::vector<std::string> getPerformers(){ return _performers; }


    };
}

#endif //STREETSHOW_H

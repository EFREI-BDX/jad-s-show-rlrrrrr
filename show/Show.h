//
// Created by riyad on 08/11/2024.
//

#ifndef SHOW_H
#define SHOW_H
#include <string>

#include "IShow.h"
#include "ShowType.h"

namespace show {
    class Show : public IShow {
    private:
        std::string name;
        std::string description;
        const ShowType *showType;

    public:
        Show(const std::string &name, const std::string &description, const ShowType *showType)
            : name(name),
              description(description) {
            this->showType = showType;
        }

        ~Show() = default;

        std::string getName() override { return this->name; }

        std::string getDescription() override {
            return this->description;
        }

        ShowType getShowType() override {
            return *this->showType;
        }
    };
};


#endif //SHOW_H

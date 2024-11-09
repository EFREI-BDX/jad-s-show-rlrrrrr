//
// Created by riyad on 08/11/2024.
//

#ifndef THEATERSHOW_H
#define THEATERSHOW_H
#include <string>
#include <string>
#include "ShowType.h"
#include "Show.h"


namespace show {
    class TheaterShow : public Show {
    private:
        std::string director;
        std::vector<std::string> actors;

    public:
        ~TheaterShow() = default;

        TheaterShow(const std::string &name, const std::string &description, const std::string &director,
                    const std::vector<std::string> &actors): Show(name, description, &ShowType::THEATER) {
            this->director = director;
            this->actors = actors;
        }

        std::string getDirector() {
            return director;
        }

        std::vector<std::string> getActors() {
            return actors;
        }
    };
}


#endif //THEATERSHOW_H

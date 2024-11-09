//
// Created by riyad on 08/11/2024.
//

#ifndef MOVIETYPE_H
#define MOVIETYPE_H

#include <string>

namespace show {
  class MovieType {
  private:
    std::string name;

    MovieType(std::string name): name(name) {
    }

  public:
    [[nodiscard]] std::string getName() const;

    static const MovieType ACTION;
    static const MovieType ADVENTURE;
    static const MovieType COMEDY;
    static const MovieType DRAMA;
    static const MovieType FANTASY;
    static const MovieType HORROR;
    static const MovieType ROMANCE;
    static const MovieType SCIENCE_FICTION;
    static const MovieType THRILLER;
  };
}


#endif //MOVIETYPE_H

//
// Created by riyad on 08/11/2024.
//

#ifndef MOVIESHOW_H
#define MOVIESHOW_H

#include <string>
#include "MovieType.h"
#include "Show.h"

namespace show {
  class MovieShow : public Show {
  private:
    std::string director;
    std::string yearOfRelease;
    const MovieType *movieType;

  public:
    ~MovieShow() = default;

    MovieShow(const std::string &name, const std::string &description, const std::string &director,
              const std::string &yearOfRelease, const MovieType *movieType): Show(name, description, &ShowType::MOVIE) {
      this->director = director;
      this->yearOfRelease = yearOfRelease;
      this->movieType = movieType;
    }

    std::string getDirector();

    std::string getYearOfRelease();

    MovieType getMovieType();
  };
}

#endif //MOVIESHOW_H

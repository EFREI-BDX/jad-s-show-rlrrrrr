//
// Created by riyad on 08/11/2024.
//

#ifndef SHOWTYPE_H
#define SHOWTYPE_H

#include <string>

namespace show {
  class ShowType {
  private:
    std::string name_;

    explicit ShowType(const std::string &name_): name_(name_) {
    }

  public:
    ~ShowType() = default;

    static const ShowType MOVIE;
    static const ShowType STREET_SHOW;
    static const ShowType THEATER;
    static const ShowType CONCERT;
    static const ShowType OTHER;

    std::string getName() { return name_; }

    std::string showTypeName();
  };
}

#endif //SHOWTYPE_H

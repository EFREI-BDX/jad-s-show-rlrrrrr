//
// Created by riyad on 08/11/2024.
//

#ifndef SPECTATOR_H
#define SPECTATOR_H
#include "ISpectator.h"

#include <string>

#include "./../show/IShow.h"

namespace customer {
  class Spectator : public ISpectator {
  private:
    std::string firstname;
    std::string lastname;

  public:
    ~Spectator();

    Spectator(const std::string firstname, const std::string lastname): firstname(firstname), lastname(lastname) {
    }

    std::string getFirstName() override { return firstname; }
    std::string getLastName() override { return lastname; }

    void watch(show::IShow &show) override;
  };
}


#endif //SPECTATOR_H

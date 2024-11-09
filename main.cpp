#include <iostream>
#include <vector>
#include "show/ConcertShow.h"
#include "show/MovieShow.h"
#include "show/StreetShow.h"
#include "show/TheaterShow.h"
#include "customer/Spectator.h"
#include "customer/ISpectator.h"
using namespace show;
using namespace customer;

int main() {
    ISpectator *jad = new Spectator("Jean-Aymeric", "DIET");
    std::vector<IShow *> shows = std::vector<IShow *>();
    shows.push_back(new ConcertShow("Concert1", "Concert1 description", "Artist1"));
    shows.push_back(new StreetShow("StreetShow1", "StreetShow1 description",
                                   std::vector<std::string>{"Street Performer 1", "Street Performer 2"}));
    shows.push_back(new TheaterShow("TheaterShow1", "TheaterShow1 description", "Director1",
                                    std::vector<std::string>{"Actor 1", "Actor 2"}));
    shows.push_back(new MovieShow("MovieShow1", "MovieShow1 description", "Director1", "2024", &MovieType::ACTION));
    for (IShow *show: shows) {
        jad->watch(*show);
    }
    return 0;
}

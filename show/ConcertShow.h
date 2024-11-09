//
// Created by riyad on 08/11/2024.
//

#ifndef CONCERTSHOW_H
#define CONCERTSHOW_H
#include "Show.h"


namespace show {
    class ConcertShow : public Show {
    private:
        std::string artist;
    public:
        ~ConcertShow()=default;
        ConcertShow(std::string name, std::string description, std::string artist):Show(name, description, &ShowType::CONCERT)  {
            this->artist = artist;
        }
        std::string getArtist(){return artist;}
    };
}



#endif //CONCERTSHOW_H

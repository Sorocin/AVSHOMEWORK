#ifndef AVSHOMEWORK_GAME_H
#define AVSHOMEWORK_GAME_H


#include "movie.h"

class Game : public Movie {
private:
    char producer_[256];

public:
    Game(const char *name, int year_of_release, const char *producer);

    // Ввод параметров игрового из файла
    static Game *in(FILE *ifst);

    // Случайный ввод параметров игрового
    static Game *inRnd();

    // Вывод параметров игрового в форматируемый поток
    void out(FILE *ofst) override;
};


#endif //AVSHOMEWORK_GAME_H

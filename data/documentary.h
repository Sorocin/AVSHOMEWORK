#ifndef AVSHOMEWORK_DOCUMENTARY_H
#define AVSHOMEWORK_DOCUMENTARY_H


#include "movie.h"

class Documentary : public Movie {
private:
    int duration_; // Длительность в минутах.

public:
    Documentary(const char *name, int year_of_release, int duration);

    // Ввод параметров документального фильма из файла
    static Documentary *in(FILE *ifst);

    // Случайный ввод параметров документального фильма
    static Documentary *inRnd();

    // Вывод параметров документального фильма в форматируемый поток
    void out(FILE *ofst) override;
};


#endif //AVSHOMEWORK_DOCUMENTARY_H



#ifndef AVSHOMEWORK_CARTOON_H
#define AVSHOMEWORK_CARTOON_H


#include "movie.h"

class Cartoon : public Movie {
public:
    // Тип создания мультфильма.
    enum TYPE {
        DRAW, PUPPET, PLASTICINE
    };

    Cartoon::TYPE type;

    Cartoon(const char *name, int year_of_release, TYPE type);

    // Ввод параметров мультфильма из файла
    static Cartoon *in(FILE *ifst);

    // Случайный ввод параметров мальтфильма
    static Cartoon *inRnd();

    // Вывод параметров мультфильма в форматируемый поток
    void out(FILE *ofst) override;
};


#endif //AVSHOMEWORK_CARTOON_H

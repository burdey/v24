//
// Created by Satori on 2022/6/3.
//

#ifndef PRO8_BARNESNOBLE_H
#define PRO8_BARNESNOBLE_H

#include "Dymocks.h"
#include <string>

class BarnesNoble: public Dymocks{
public:
    int numSoldBooks = 0;
    BarnesNoble();
    BarnesNoble(string n);
    void soldBook();
    int get_numSoldBooks();

};


#endif //PRO8_BARNESNOBLE_H

//
// Created by Satori on 2022/6/3.
//

#ifndef PRO8_STORECHAIN_H
#define PRO8_STORECHAIN_H

#include <iostream>
#include "BookStore.h"
#include "BarnesNoble.h"
#include "Dymocks.h"
using namespace std;

class StoreChain {
private:
    string name;
    int number_of_books;
    BookStore **bookStores;
public:
    StoreChain(string n);
    BookStore **get_bookStores();


};


#endif //PRO8_STORECHAIN_H

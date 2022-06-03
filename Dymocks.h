//
// Created by Satori on 2022/6/3.
//

#ifndef PRO8_DYMOCKS_H
#define PRO8_DYMOCKS_H

#include "BookStore.h"


class Dymocks:public BookStore {
private:
    static int nextNumStores;
public:
    int storeID;
    bool isOnline;
    Dymocks(bool s);
    int generateStored();
    int get_storeID();
    void set_storeID(int storeID);
    bool get_isOnline();
    void set_isOnline(bool isOnline);
    int get_nextNumStores();
    void set_nextNumStores(int nextNumStores);
    float get_onlineTax();

};


#endif //PRO8_DYMOCKS_H

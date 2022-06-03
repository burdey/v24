//
// Created by Satori on 2022/6/3.
//

#include "Dymocks.h"

Dymocks::Dymocks(bool s): BookStore("Dymock","",500){
    isOnline = s;
    storeID = generateStored();
}
int Dymocks::generateStored(){
    return nextNumStores++;

}
int Dymocks::get_storeID(){
    return storeID;

}
void Dymocks::set_storeID(int storeID){
    this->storeID = storeID

}
bool Dymocks::get_isOnline(){
    return isOnline;

}
void Dymocks::set_isOnline(bool isOnline){
    this->isOnline =isOnline;

}
int Dymocks::get_nextNumStores(){
    return nextNumStores;

}
void Dymocks::set_nextNumStores(int nextNumStores){
    this->nextNumStores = nextNumStores

}
float Dymocks::get_onlineTax(){
    if(isOnline){
        return 500;
    }
    else{
        return 0;
    }

}

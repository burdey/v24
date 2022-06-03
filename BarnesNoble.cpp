//
// Created by Satori on 2022/6/3.
//

#include "BarnesNoble.h"

BarnesNoble::BarnesNoble(string n):Dymocks(false){
    this->name = n;

}
void BarnesNoble::soldBook(){
    numSoldBooks ++;

}
int BarnesNoble::get_numSoldBooks(){
    return numSoldBooks;

}

//
// Created by Satori on 2022/6/3.
//

#include "BarnesNoble.h"
#include <iostream>
using namespace std;

int main(){
    BarnesNoble Barne("CCC");
    cout<<Barne.get_numSoldBooks()<<endl;
    Barne.soldBook();
    cout<<Barne.get_numSoldBooks()<<endl;
    return 0;

}
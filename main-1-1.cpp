//
// Created by Satori on 2022/6/3.
//

#include "Bookstore.h"
#include <iostream>
using namespace std;

int main(){
    BookStore satori("satori","cxa",500);
    cout<<satori.get_name()<<endl;
    cout<<satori.get_address()<<endl;
    cout<<satori.get_numBook()<<endl;
}